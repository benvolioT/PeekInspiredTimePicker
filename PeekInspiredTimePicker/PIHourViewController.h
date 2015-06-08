//
//  HourViewController.h
//  PunctualTime
//
//  Created by Adam Cooper on 11/10/14.
//  Copyright (c) 2014 The Timers. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PIHourViewDelegate

-(void)hourSelected:(NSString *)string;

@end

@interface PIHourViewController : UIViewController

@property id<PIHourViewDelegate> delegate;

@end
