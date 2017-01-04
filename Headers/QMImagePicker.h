//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QMImageCropControllerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class KSImagePickerController, NSString;
@protocol QMImagePickerDelegate;

@interface QMImagePicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, QMImageCropControllerDelegate>
{
    id <QMImagePickerDelegate> _delegate;
    KSImagePickerController *_imagePickerController;
    struct CGSize _cropSize;
}

@property(readonly, nonatomic) KSImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(nonatomic) struct CGSize cropSize; // @synthesize cropSize=_cropSize;
@property(nonatomic) __weak id <QMImagePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageCropController:(id)arg1 didFinishWithCroppedImage:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)hideController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
