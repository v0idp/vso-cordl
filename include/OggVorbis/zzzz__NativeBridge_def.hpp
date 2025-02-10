#pragma once
// IWYU pragma private; include "OggVorbis/NativeBridge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeBridge)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OggVorbis {
class NativeBridge;
}
// Write type traits
MARK_REF_PTR_T(::OggVorbis::NativeBridge);
// Dependencies System.Object
namespace OggVorbis {
// Is value type: false
// CS Name: OggVorbis.NativeBridge
class CORDL_TYPE NativeBridge : public ::System::Object {
public:
// Declarations
/// @brief Method CloseFileStream, addr 0x319c860, size 0x7c, virtual false, abstract: false, final false
static inline int32_t CloseFileStream(::System::IntPtr  state) ;

/// @brief Method FreeMemoryArrayForWriteAllPcmData, addr 0x319c488, size 0x7c, virtual false, abstract: false, final false
static inline int32_t FreeMemoryArrayForWriteAllPcmData(::System::IntPtr  bytesNativeArray) ;

/// @brief Method FreeSamplesArrayNativeMemory, addr 0x319c69c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t FreeSamplesArrayNativeMemory(::ByRef<::System::IntPtr>  samples) ;

/// @brief Method OpenReadFileStream, addr 0x319c718, size 0xac, virtual false, abstract: false, final false
static inline ::System::IntPtr OpenReadFileStream(::StringW  filePath, ::ByRef<int16_t>  channels, ::ByRef<int32_t>  frequency) ;

/// @brief Method ReadAllPcmDataFromFile, addr 0x319c504, size 0xcc, virtual false, abstract: false, final false
static inline int32_t ReadAllPcmDataFromFile(::StringW  filePath, ::ByRef<::System::IntPtr>  samples, ::ByRef<int32_t>  samplesLength, ::ByRef<int16_t>  channels, ::ByRef<int32_t>  frequency, int32_t  maxSamplesToRead) ;

/// @brief Method ReadAllPcmDataFromMemory, addr 0x319c5d0, size 0xcc, virtual false, abstract: false, final false
static inline int32_t ReadAllPcmDataFromMemory(::ArrayW<uint8_t,::Array<uint8_t>*>  memoryArray, int32_t  memoryArrayLength, ::ByRef<::System::IntPtr>  samples, ::ByRef<int32_t>  samplesLength, ::ByRef<int16_t>  channels, ::ByRef<int32_t>  frequency, int32_t  maxSamplesToRead) ;

/// @brief Method ReadFromFileStream, addr 0x319c7c4, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ReadFromFileStream(::System::IntPtr  state, ::ArrayW<float_t,::Array<float_t>*>  samplesToFill, int32_t  maxSamplesToRead) ;

/// @brief Method WriteAllPcmDataToFile, addr 0x319c2c8, size 0xe4, virtual false, abstract: false, final false
static inline int32_t WriteAllPcmDataToFile(::StringW  filePath, ::ArrayW<float_t,::Array<float_t>*>  samples, int32_t  samplesLength, int16_t  channels, int32_t  frequency, float_t  base_quality, int32_t  samplesToRead) ;

/// @brief Method WriteAllPcmDataToMemory, addr 0x319c3ac, size 0xdc, virtual false, abstract: false, final false
static inline int32_t WriteAllPcmDataToMemory(::ByRef<::System::IntPtr>  bytesPtr, ::ByRef<int32_t>  bytesLength, ::ArrayW<float_t,::Array<float_t>*>  samples, int32_t  samplesLength, int16_t  channels, int32_t  frequency, float_t  base_quality, int32_t  samplesToRead) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeBridge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeBridge(NativeBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeBridge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeBridge(NativeBridge const& ) = delete;

/// @brief Field PLUGIN_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  PLUGIN_NAME{u"VorbisPlugin"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12478};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OggVorbis::NativeBridge, 0x10>, "Size mismatch!");

} // namespace end def OggVorbis
NEED_NO_BOX(::OggVorbis::NativeBridge);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbis::NativeBridge*, "OggVorbis", "NativeBridge");
