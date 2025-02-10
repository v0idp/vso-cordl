#pragma once
// IWYU pragma private; include "VROSC/SourceRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SourceRecorder)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace VROSC {
class SourceRecorder;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SourceRecorder);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SourceRecorder
class CORDL_TYPE SourceRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnRecordingFilled, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRecordingFilled, put=__cordl_internal_set_OnRecordingFilled)) ::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*  OnRecordingFilled;

 __declspec(property(get=get_Recording)) bool  Recording;

/// @brief Field _arrayReference, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrayReference, put=__cordl_internal_set__arrayReference)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  _arrayReference;

/// @brief Field _overdub, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__overdub, put=__cordl_internal_set__overdub)) bool  _overdub;

/// @brief Field _performRecordingFilledCallback, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__performRecordingFilledCallback, put=__cordl_internal_set__performRecordingFilledCallback)) bool  _performRecordingFilledCallback;

/// @brief Field _recording, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__recording, put=__cordl_internal_set__recording)) bool  _recording;

/// @brief Field _recordingLength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordingLength, put=__cordl_internal_set__recordingLength)) int32_t  _recordingLength;

/// @brief Field _recordingWriteSample, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordingWriteSample, put=__cordl_internal_set__recordingWriteSample)) int32_t  _recordingWriteSample;

/// @brief Field _sharedRecordingBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sharedRecordingBuffer, put=setStaticF__sharedRecordingBuffer)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  _sharedRecordingBuffer;

/// @brief Field _useArrayReference, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get__useArrayReference, put=__cordl_internal_set__useArrayReference)) bool  _useArrayReference;

/// @brief Method AddInterleavedDataToRecording, addr 0x17ce388, size 0x30c, virtual false, abstract: false, final false
inline void AddInterleavedDataToRecording(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method CheckBuffer, addr 0x17cf8c8, size 0x6c, virtual false, abstract: false, final false
inline void CheckBuffer() ;

/// @brief Method CreateRecordingCopy, addr 0x17cfcd8, size 0x16c, virtual true, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> CreateRecordingCopy() ;

static inline ::VROSC::SourceRecorder* New_ctor() ;

/// @brief Method RoutingDemo_GetData, addr 0x17cf7b0, size 0xa4, virtual false, abstract: false, final false
static inline void RoutingDemo_GetData(int32_t  target, ::ArrayW<float_t,::Array<float_t>*>  data, int32_t  numsamples, int32_t  numchannels) ;

/// @brief Method Setup, addr 0x17cdb34, size 0x114, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method StartRecording, addr 0x17cf934, size 0x168, virtual true, abstract: false, final false
inline void StartRecording(::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*  recordingFilledCallback, int32_t  length, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  arrayReference, bool  overdub) ;

/// @brief Method StealRecording, addr 0x17cfa9c, size 0x23c, virtual true, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> StealRecording(bool  clear, bool  stealEvenIfNotRecording) ;

/// @brief Method StopAndGetRecording, addr 0x17cdfec, size 0x34, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> StopAndGetRecording() ;

/// @brief Method StopRecording, addr 0x17cdf50, size 0xc, virtual false, abstract: false, final false
inline void StopRecording() ;

/// @brief Method Update, addr 0x17cf8c4, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>* const& __cordl_internal_get_OnRecordingFilled() const;

constexpr ::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*& __cordl_internal_get_OnRecordingFilled() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get__arrayReference() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get__arrayReference() ;

constexpr bool const& __cordl_internal_get__overdub() const;

constexpr bool& __cordl_internal_get__overdub() ;

constexpr bool const& __cordl_internal_get__performRecordingFilledCallback() const;

constexpr bool& __cordl_internal_get__performRecordingFilledCallback() ;

constexpr bool const& __cordl_internal_get__recording() const;

constexpr bool& __cordl_internal_get__recording() ;

constexpr int32_t const& __cordl_internal_get__recordingLength() const;

constexpr int32_t& __cordl_internal_get__recordingLength() ;

constexpr int32_t const& __cordl_internal_get__recordingWriteSample() const;

constexpr int32_t& __cordl_internal_get__recordingWriteSample() ;

constexpr bool const& __cordl_internal_get__useArrayReference() const;

constexpr bool& __cordl_internal_get__useArrayReference() ;

constexpr void __cordl_internal_set_OnRecordingFilled(::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*  value) ;

constexpr void __cordl_internal_set__arrayReference(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set__overdub(bool  value) ;

constexpr void __cordl_internal_set__performRecordingFilledCallback(bool  value) ;

constexpr void __cordl_internal_set__recording(bool  value) ;

constexpr void __cordl_internal_set__recordingLength(int32_t  value) ;

constexpr void __cordl_internal_set__recordingWriteSample(int32_t  value) ;

constexpr void __cordl_internal_set__useArrayReference(bool  value) ;

/// @brief Method .ctor, addr 0x17ce6ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> getStaticF__sharedRecordingBuffer() ;

/// @brief Method get_Recording, addr 0x17cf8bc, size 0x8, virtual false, abstract: false, final false
inline bool get_Recording() ;

static inline void setStaticF__sharedRecordingBuffer(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SourceRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SourceRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SourceRecorder(SourceRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SourceRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SourceRecorder(SourceRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{302};

/// @brief Field _recordingWriteSample, offset: 0x20, size: 0x4, def value: None
 int32_t  ____recordingWriteSample;

/// @brief Field _recordingLength, offset: 0x24, size: 0x4, def value: None
 int32_t  ____recordingLength;

/// @brief Field OnRecordingFilled, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*  ___OnRecordingFilled;

/// @brief Field _performRecordingFilledCallback, offset: 0x30, size: 0x1, def value: None
 bool  ____performRecordingFilledCallback;

/// @brief Field _recording, offset: 0x31, size: 0x1, def value: None
 bool  ____recording;

/// @brief Field _overdub, offset: 0x32, size: 0x1, def value: None
 bool  ____overdub;

/// @brief Field _useArrayReference, offset: 0x33, size: 0x1, def value: None
 bool  ____useArrayReference;

/// @brief Field _arrayReference, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ____arrayReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SourceRecorder, ____recordingWriteSample) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SourceRecorder, ____recordingLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::SourceRecorder, ___OnRecordingFilled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SourceRecorder, ____performRecordingFilledCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SourceRecorder, ____recording) == 0x31, "Offset mismatch!");

static_assert(offsetof(::VROSC::SourceRecorder, ____overdub) == 0x32, "Offset mismatch!");

static_assert(offsetof(::VROSC::SourceRecorder, ____useArrayReference) == 0x33, "Offset mismatch!");

static_assert(offsetof(::VROSC::SourceRecorder, ____arrayReference) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SourceRecorder, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SourceRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SourceRecorder*, "VROSC", "SourceRecorder");
