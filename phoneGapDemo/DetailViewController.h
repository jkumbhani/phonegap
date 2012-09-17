//
//  DetailViewController.h
//  phoneGapDemo
//
//  Created by Jay Kumbhani on 9/17/12.
//  Copyright (c) 2012 Jay Kumbhani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
