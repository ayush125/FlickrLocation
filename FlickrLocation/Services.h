//
//  Services.h
//  FlickrLocation
//
//  Created by iUS on 1/25/17.
//  Copyright © 2017 FlickrLocation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>
#import <CoreLocation/CoreLocation.h>


@interface Services : NSObject

/** Designated initializer. The singleton instance of RESTManager must be obtained from this method */
+ (Services *) sharedInstance;

/** Loads a remote image from a URL and executes a block */
- (void) loadRemoteImageFromURL: (NSURL *) url andExecuteBlock: ( void (^) (BOOL success, UIImage * image, NSURL * url) ) block;

/** Loads the Flickr photos close to a location (expressed in CLLocationCoordinate) and relative to a radius. */
- (void) loadFlickrImagesFromLocation: (CLLocationCoordinate2D) bottomLeft toLocation: (CLLocationCoordinate2D) topRight andExecuteBlock: ( void (^) (BOOL success, NSArray * entries) ) block;


@end
