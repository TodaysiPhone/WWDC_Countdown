//
//  CountdownViewController.h
//  Countdown
//
//  Created by Kyle Frost on 9/7/13.
//  Copyright (c) 2013 Kyle Frost. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CountdownViewController : UIViewController {
    
    /******** 1 ********/
    NSDate *destinationDate;
    
    /******** 2 ********/
    IBOutlet UILabel *countdownLabel;
    
    /******** 3 ********/
    NSTimer *timer;
    
}

/******** 4 ********/
-(void)updateLabel;

@end
