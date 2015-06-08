//
//  MinutesViewController.h
//  PunctualTime
//
//  Created by Adam Cooper on 11/10/14.
//  Copyright (c) 2014 The Timers. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PIMinuteViewDelegate

-(void)minuteSelected:(NSString *)string;

@end

@interface PIMinutesViewController : UIViewController

@property id<PIMinuteViewDelegate> delegate;

@end
