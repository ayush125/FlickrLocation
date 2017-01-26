//
//  PhotoDetailViewController.h
//  FlickrLocation
//
//  Created by iUS on 1/25/17.
//  Copyright © 2017 FlickrLocation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>


@interface PhotoDetailViewController : UIViewController
@property (nonatomic, strong) UIImage * imageToShowInDetail;
@property (nonatomic, strong) NSString * photoTitle;
@property (nonatomic) CLLocationCoordinate2D photoCoordinate;

@end
