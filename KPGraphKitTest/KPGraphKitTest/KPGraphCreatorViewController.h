//
//  KPGraphCreatorViewController.h
//  KPGraphKitTest
//
//  Created by Kiran Panesar on 22/02/2013.
//  Copyright (c) 2013 MobileX Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KPGraphCanvasView.h"

@class KPGraphResolver;

typedef enum {
    KPGraphTypeDijkstras,
    KPGraphTypeKruskals
}KPGraphType;

@interface KPGraphCreatorViewController : UIViewController <UIAlertViewDelegate> {
    
    // Array to store the nodes
    NSMutableArray *graphNodes;
    // Dictionary to show how nodes are connected
    NSMutableDictionary *nodeParings;
    
    // Start and end ID (used for route-finding algorithms)
    NSString *startID;
    NSString *endID;
    
    BOOL addingNode;
    
    UIAlertView *firstNodeAlert;
    UIAlertView *secondNodeAlert;
    
    IBOutlet KPGraphCanvasView *graphCanvasView;
    KPGraphType graphType;
    
    KPGraphResolver *resolver;
}

- (id)initWithGraphType:(KPGraphType)type;

- (IBAction)pushAddNode:(id)sender;
- (IBAction)pushRunAlgorithm:(id)sender;

// Algorithm triggers
-(void)dijkstrasWithStart:(NSString *)startNode end:(NSString *)endNode;

-(NSInteger)weightBetween:(NSString *)nodeOne and:(NSString *)nodeTwo inConnections:(NSMutableDictionary *)connections;
@end
