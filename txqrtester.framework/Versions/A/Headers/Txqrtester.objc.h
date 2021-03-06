// Objective-C API for talking to github.com/divan/txqr/cmd/txqr-tester/mobile Go package.
//   gobind -lang=objc github.com/divan/txqr/cmd/txqr-tester/mobile
//
// File is generated by gobind. Do not edit.

#ifndef __Txqrtester_H__
#define __Txqrtester_H__

@import Foundation;
#include "Universe.objc.h"


@class TxqrtesterConnector;

/**
 * Connector represents a connection to the txqr-tester app
via websockets.
 */
@interface TxqrtesterConnector : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
// skipped field Connector.Decoder with unsupported type: *github.com/divan/txqr/protocol.Decoder

/**
 * Close closes underlying WebSocket connection.
 */
- (BOOL)close:(NSError**)error;
/**
 * Connect attempts to establish connection to the WS server.
 */
- (BOOL)connect:(NSString*)address error:(NSError**)error;
- (NSString*)data;
- (NSData*)dataBytes;
- (BOOL)decodeChunk:(NSString*)data error:(NSError**)error;
- (BOOL)isCompleted;
- (long)progress;
- (int64_t)readInterval;
- (void)reset;
/**
 * SendResult sends scanning result in milliseconds.
 */
- (BOOL)sendResult:(int64_t)duration error:(NSError**)error;
- (NSString*)speed;
/**
 * StartNext notifies txqr-tester that app is ready to scan next animated QR.
 */
- (BOOL)startNext:(NSError**)error;
- (NSString*)totalSize;
- (NSString*)totalTime;
- (int64_t)totalTimeMs;
@end

FOUNDATION_EXPORT TxqrtesterConnector* TxqrtesterNewConnector(void);

#endif
