//  好用请star：https://github.com/AllLuckly/LBLaunchImageAd
//  LBLaunchImageAdView.h
//  LBLaunchImageAd
//  技术交流群：534926022（免费） 511040024(0.8元/人付费)
//  Created by gold on 16/6/8.
//  Copyright © 2016年 Bison. All rights reserved.
//  iOS开发学习app下载https://itunes.apple.com/cn/app/it-blog-for-ios-developers/id1067787090?mt=8

typedef enum {
    
    LogoAdType = 0,//带logo的广告
    FullScreenAdType = 1,//全屏的广告
    
}AdType;

#import <UIKit/UIKit.h>

typedef void (^LBClick) (NSInteger tag);

@interface LBLaunchImageAdView : UIView

@property (strong, nonatomic) UIImageView *aDImgView;

@property (strong, nonatomic) UIWindow *window;

@property (assign, nonatomic) NSInteger adTime;
///倒计时总时长,默认6秒
@property (strong, nonatomic) UIButton *skipBtn;
///本地图片名字
@property (strong, nonatomic) NSString *localAdImgName;
///网络图片URL
@property (strong, nonatomic) NSString *imgUrl;

@property (nonatomic, copy)LBClick clickBlock;


/* window 当前的window
 *
 *  adType 广告类型
 */
- (instancetype)initWithWindow:(UIWindow *)window adType:(NSInteger)adType;

@end
