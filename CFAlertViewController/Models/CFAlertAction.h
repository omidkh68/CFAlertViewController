//
//  CFAlertAction.h
//  CFAlertViewController
//
//  Created by Ram Suthar on 07/06/16.
//
//  The MIT License (MIT)
//
//  Copyright (c) 2016 Codigami Inc
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.



#import <UIKit/UIKit.h>


@class CFAlertAction;


typedef NS_ENUM(NSInteger, CFAlertActionStyle) {
    CFAlertActionStyleDefault = 0,
    CFAlertActionStyleCancel,
    CFAlertActionStyleDestructive
};

typedef NS_ENUM(NSInteger, CFAlertActionAlignment) {
    CFAlertActionAlignmentJustified = 0,
    CFAlertActionAlignmentRight,
    CFAlertActionAlignmentLeft,
    CFAlertActionAlignmentCenter
};

typedef void (^CFAlertActionHandlerBlock)(CFAlertAction *action);


@interface CFAlertAction : NSObject<NSCopying>


+ (CFAlertAction *)actionWithTitle:(NSString *)title
                             style:(CFAlertActionStyle)style
                             alignment:(CFAlertActionAlignment)alignment
                             color:(UIColor *)color
                           handler:(CFAlertActionHandlerBlock)handler;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) CFAlertActionStyle style;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) CFAlertActionAlignment alignment;
@property (nonatomic, copy, readonly) CFAlertActionHandlerBlock handler;
@property (nonatomic, getter=isEnabled) BOOL enabled;

@end