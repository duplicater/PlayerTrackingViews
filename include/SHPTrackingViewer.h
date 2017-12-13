//
//  SHPTrackingViewer.h
//  SHPTrackingViewer
//
//  Created by Le Cuong on 12/13/17.
//  Copyright © 2017 Le Cuong. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SHPTrackingViewsDelegate
@optional
- (void)SHPTrackingViewsError:(NSError *)error content:(NSString*)content;
@end

@interface SHPTrackingViewer : NSObject

+ (instancetype)shareInstance;

- (void)setUrlTrackViewer:(NSString*)url;
- (void)setInterval:(int)interval;

- (void)viewsOfContent:(NSString*)contentId _responseblock:(void(^)(NSString *views))response;
- (void)subscribeResponseViewsOfContent:(NSString*)content _responseblock:(void(^)(NSString *views))response;
@property (nonatomic, weak) id<SHPTrackingViewsDelegate> delegate;

@end
