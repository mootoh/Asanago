//
//  MTMasterViewController.h
//  Asanago
//
//  Created by Motohiro Takayama on 7/25/12.
//  Copyright (c) 2012 mootoh.net. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MTDetailViewController;

#import <CoreData/CoreData.h>

@interface MTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) MTDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
