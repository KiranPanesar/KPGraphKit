//
//  ViewController.m
//  KPGraphKitTest
//
//  Created by Kiran Panesar on 22/02/2013.
//  Copyright (c) 2013 MobileX Labs. All rights reserved.
//

#import "ViewController.h"
#import "KPGraphCreatorViewController.h"

static NSString * algorithmTypes[] = {@"Dijkstra's"};

@interface ViewController ()

@end

@implementation ViewController

-(void)viewDidAppear:(BOOL)animated {
    [optionsTableView deselectRowAtIndexPath:[optionsTableView indexPathForSelectedRow] animated:YES];
}

- (void)viewDidLoad
{
    [self.navigationItem setTitle:@"Pick Algorithm"];
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 1;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    static NSString *CellIdentifier = @"Cell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier];
        [cell setAccessoryType:UITableViewCellAccessoryDisclosureIndicator];
    }
    
    [cell.textLabel setText:algorithmTypes[indexPath.row]];
    
    return cell;
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    if ([algorithmTypes[indexPath.row] isEqualToString:@"Dijkstra's"]) {
        KPGraphCreatorViewController *graphCreator = [[KPGraphCreatorViewController alloc] initWithGraphType:KPGraphTypeDijkstras];
        [self.navigationController pushViewController:graphCreator animated:YES];
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
