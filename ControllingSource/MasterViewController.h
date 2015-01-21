//
//  MasterViewController.h
//  ControllingSource
//
//  Created by cocoabanana on 15/1/21.
//  Copyright (c) 2015年 CocoaBanana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

