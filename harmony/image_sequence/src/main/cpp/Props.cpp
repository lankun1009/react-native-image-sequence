
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GeneratePropsCpp.js
 */

#include "Props.h"
#include <react/renderer/core/PropsParserContext.h>
#include <react/renderer/core/propsConversions.h>

namespace facebook {
namespace react {

    ImageSequenceProps::ImageSequenceProps(const PropsParserContext &context, const ImageSequenceProps &sourceProps,
                                           const RawProps &rawProps)
        : ViewProps(context, sourceProps, rawProps),

          loop(convertRawProp(context, rawProps, "loop", sourceProps.loop, {true})),
          startFrameIndex(convertRawProp(context, rawProps, "startFrameIndex", sourceProps.startFrameIndex, {0})),
          framesPerSecond(convertRawProp(context, rawProps, "framesPerSecond", sourceProps.framesPerSecond, {24})),
          downsampleWidth(convertRawProp(context, rawProps, "downsampleWidth", sourceProps.downsampleWidth, {-1})),
          downsampleHeight(convertRawProp(context, rawProps, "downsampleHeight", sourceProps.downsampleHeight, {-1})),
          images(convertRawProp(context, rawProps, "images", sourceProps.images, {})) {}

} // namespace react
} // namespace facebook
