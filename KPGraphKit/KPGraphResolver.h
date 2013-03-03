//
//  KPGraphResolver.h
//  DijkstrasDemo
//
//  Created by Kiran Panesar on 11/02/2013.
//  Copyright (c) 2013 MobileX Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KPGraphResolver : NSObject

-(void)dijkstrasOnConnections:(NSMutableDictionary *)connections nodes:(NSMutableDictionary *)nodes withStartNode:(NSString *)startID endNode:(NSString *)endID andCompletionHandler:(void (^)(NSMutableArray *, NSInteger))callback;

-(void)kruskalsOnConnections:(NSMutableDictionary *)connections nodes:(NSMutableDictionary *)nodes withCompletionHandler:(void (^)(NSMutableDictionary *, NSInteger))callback;

@end
