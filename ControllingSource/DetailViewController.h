//
//  DetailViewController.h
//  ControllingSource
//
//  Created by cocoabanana on 15/1/21.
//  Copyright (c) 2015年 CocoaBanana. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

