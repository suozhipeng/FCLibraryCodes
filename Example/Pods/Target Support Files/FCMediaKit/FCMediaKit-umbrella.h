#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "CameraMediakit.h"
#import "mk_common.h"
#import "mk_events.h"
#import "mk_events_objects.h"
#import "mk_frame.h"
#import "mk_h264_splitter.h"
#import "mk_httpclient.h"
#import "mk_media.h"
#import "mk_mediakit.h"
#import "mk_player.h"
#import "mk_proxyplayer.h"
#import "mk_pusher.h"
#import "mk_recorder.h"
#import "mk_rtp_server.h"
#import "mk_tcp.h"
#import "mk_thread.h"
#import "mk_track.h"
#import "mk_transcode.h"
#import "mk_util.h"

FOUNDATION_EXPORT double FCMediaKitVersionNumber;
FOUNDATION_EXPORT const unsigned char FCMediaKitVersionString[];

