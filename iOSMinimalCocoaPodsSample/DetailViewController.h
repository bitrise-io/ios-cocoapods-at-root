//
//  DetailViewController.h
//  iOSMinimalCocoaPodsSample
//
//  Created by Viktor Benei on 11/03/16.
//  Copyright © 2016 bitrise. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

