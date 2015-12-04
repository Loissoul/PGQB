//
//  HomePageAnimationUtil.h
//  AutolayoutAnimation
//
//  Created by PGQ on 15/12/3.
//  Copyright © 2015年 PGQ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HomePageAnimationUtil : NSObject

+ (void)titleLabelAnimationWithLabel:(UILabel *)label withView:(UIView *)view;

+ (void)textFieldBottomLineAnimationWithConstraint:(NSLayoutConstraint *)constraint WithView:(UIView *)view;

+ (void)phoneIconAnimationWithLabel:(UIImageView *)imageView withView:(UIView *)view;

+ (void)tipsLabelMaskAnimation:(UIView *)view withBeginTime:(NSTimeInterval)beginTime;

+ (void)registerButtonWidthAnimation:(UIButton *)button withView:(UIView *)view andProgress:(CGFloat)progress;

@end
