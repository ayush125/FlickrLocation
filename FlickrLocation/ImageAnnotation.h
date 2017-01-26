//
//  ImageAnnotation.h
//  FlickrLocation
//
//  Created by iUS on 1/25/17.
//  Copyright © 2017 FlickrLocation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import "Services.h"


@interface ImageAnnotation : NSObject<MKAnnotation>
- (id) initWithValuesFromDictionary: (NSDictionary *) dictionary;

@property (nonatomic, strong) UIImage * cachedBigImage;         // cached image, original (big) version
@property (nonatomic, strong) UIImage * cachedThumbnailImage;   // cached image, thumbnail
@property (nonatomic, strong) NSString * imageTitle;            // The name(title) of the Flickr Photo (if any)
@property (nonatomic, strong) NSString * bigImageURL;           // original (big) image data
@property (nonatomic, strong) NSString * thumbnailImageURL;     // thumbnail image data.

@end
