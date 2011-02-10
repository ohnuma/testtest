//
//  PhotoAlbum.h
//  CodeDataTest
//
//  Created by Shinya OHNUMA on 10/11/16.
//  Copyright 2010 Arti Co. Ltd. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Photo;

@interface PhotoAlbum :  NSManagedObject  
{
}

@property (nonatomic, retain) NSDate * created;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * photoAlbumId;
@property (nonatomic, retain) NSString * note;
@property (nonatomic, retain) NSSet* photos;

@end


@interface PhotoAlbum (CoreDataGeneratedAccessors)
- (void)addPhotosObject:(Photo *)value;
- (void)removePhotosObject:(Photo *)value;
- (void)addPhotos:(NSSet *)value;
- (void)removePhotos:(NSSet *)value;

@end

