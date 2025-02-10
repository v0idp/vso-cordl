#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "NatSuite/Devices/AudioDevice.hpp"
#include "NatSuite/Devices/CameraDevice.hpp"
#include "NatSuite/Devices/FlashMode.hpp"
#include "NatSuite/Devices/FrameOrientation.hpp"
#include "NatSuite/Devices/IAudioDevice.hpp"
#include "NatSuite/Devices/ICameraDevice.hpp"
#include "NatSuite/Devices/IMediaDevice.hpp"
#include "NatSuite/Devices/MediaDeviceQuery.hpp"
#include "NatSuite/Devices/MixerDevice.hpp"
#include "NatSuite/Devices/SampleBufferDelegate.hpp"
#include "NatSuite/Devices/WebCameraDevice.hpp"
#ifdef __cpp_modules
                    export module Devices;
                    #endif
                
