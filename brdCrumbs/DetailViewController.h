//
//  DetailViewController.h
//  brdCrumbs
//
//  Created by Shabu Thomas on 29/07/2014.
//  Copyright (c) 2014 VCanDo IT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
