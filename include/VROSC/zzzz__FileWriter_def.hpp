#pragma once
// IWYU pragma private; include "VROSC/FileWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileWriter)
namespace System::IO {
class StreamWriter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AudioClip;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
struct FileWriter__ExportTapeRecording_d__23;
}
namespace VROSC {
struct FileWriter__GetAudioClip_d__38;
}
namespace VROSC {
struct FileWriter__GetTextFile_d__18;
}
namespace VROSC {
struct FileWriter__LoadAudioFromFile_d__25;
}
namespace VROSC {
struct FileWriter__LoadInstrumentEventsFromFile_d__27;
}
namespace VROSC {
struct FileWriter__LoadPatchFile_d__20;
}
namespace VROSC {
struct FileWriter__LoadPreviewFromFile_d__31;
}
namespace VROSC {
struct FileWriter__LoadSampleFile_d__22;
}
namespace VROSC {
struct FileWriter__SaveAudioToFile_d__24;
}
namespace VROSC {
struct FileWriter__SaveInstrumentEventsToFile_d__26;
}
namespace VROSC {
struct FileWriter__SavePatchToFile_d__19;
}
namespace VROSC {
struct FileWriter__SavePreviewToFile_d__30;
}
namespace VROSC {
struct FileWriter__SaveSampleToFile_d__21;
}
namespace VROSC {
class FileWriter___c;
}
namespace VROSC {
class FileWriter___c__DisplayClass25_0;
}
namespace VROSC {
class FileWriter___c__DisplayClass26_0;
}
namespace VROSC {
class FileWriter___c__DisplayClass27_0;
}
namespace VROSC {
class FileWriter___c__DisplayClass30_0;
}
namespace VROSC {
class FileWriter___c__DisplayClass31_0;
}
namespace VROSC {
class InstrumentEvent;
}
// Forward declare root types
namespace VROSC {
class FileWriter;
}
namespace VROSC {
class FileWriter___c;
}
namespace VROSC {
class FileWriter___c__DisplayClass25_0;
}
namespace VROSC {
class FileWriter___c__DisplayClass26_0;
}
namespace VROSC {
class FileWriter___c__DisplayClass27_0;
}
namespace VROSC {
class FileWriter___c__DisplayClass30_0;
}
namespace VROSC {
class FileWriter___c__DisplayClass31_0;
}
namespace VROSC {
struct FileWriter__ExportTapeRecording_d__23;
}
namespace VROSC {
struct FileWriter__GetAudioClip_d__38;
}
namespace VROSC {
struct FileWriter__GetTextFile_d__18;
}
namespace VROSC {
struct FileWriter__LoadAudioFromFile_d__25;
}
namespace VROSC {
struct FileWriter__LoadInstrumentEventsFromFile_d__27;
}
namespace VROSC {
struct FileWriter__LoadPatchFile_d__20;
}
namespace VROSC {
struct FileWriter__LoadPreviewFromFile_d__31;
}
namespace VROSC {
struct FileWriter__LoadSampleFile_d__22;
}
namespace VROSC {
struct FileWriter__SaveAudioToFile_d__24;
}
namespace VROSC {
struct FileWriter__SaveInstrumentEventsToFile_d__26;
}
namespace VROSC {
struct FileWriter__SavePatchToFile_d__19;
}
namespace VROSC {
struct FileWriter__SavePreviewToFile_d__30;
}
namespace VROSC {
struct FileWriter__SaveSampleToFile_d__21;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FileWriter);
MARK_REF_PTR_T(::VROSC::FileWriter___c);
MARK_REF_PTR_T(::VROSC::FileWriter___c__DisplayClass25_0);
MARK_REF_PTR_T(::VROSC::FileWriter___c__DisplayClass26_0);
MARK_REF_PTR_T(::VROSC::FileWriter___c__DisplayClass27_0);
MARK_REF_PTR_T(::VROSC::FileWriter___c__DisplayClass30_0);
MARK_REF_PTR_T(::VROSC::FileWriter___c__DisplayClass31_0);
MARK_VAL_T(::VROSC::FileWriter__ExportTapeRecording_d__23);
MARK_VAL_T(::VROSC::FileWriter__GetAudioClip_d__38);
MARK_VAL_T(::VROSC::FileWriter__GetTextFile_d__18);
MARK_VAL_T(::VROSC::FileWriter__LoadAudioFromFile_d__25);
MARK_VAL_T(::VROSC::FileWriter__LoadInstrumentEventsFromFile_d__27);
MARK_VAL_T(::VROSC::FileWriter__LoadPatchFile_d__20);
MARK_VAL_T(::VROSC::FileWriter__LoadPreviewFromFile_d__31);
MARK_VAL_T(::VROSC::FileWriter__LoadSampleFile_d__22);
MARK_VAL_T(::VROSC::FileWriter__SaveAudioToFile_d__24);
MARK_VAL_T(::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26);
MARK_VAL_T(::VROSC::FileWriter__SavePatchToFile_d__19);
MARK_VAL_T(::VROSC::FileWriter__SavePreviewToFile_d__30);
MARK_VAL_T(::VROSC::FileWriter__SaveSampleToFile_d__21);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FileWriter/<>c
class CORDL_TYPE FileWriter___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::FileWriter___c*  __9;

/// @brief Field <>9__23_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_0, put=setStaticF___9__23_0)) ::System::Action*  __9__23_0;

static inline ::VROSC::FileWriter___c* New_ctor() ;

/// @brief Method <ExportTapeRecording>b__23_0, addr 0x17a0854, size 0x4, virtual false, abstract: false, final false
inline void _ExportTapeRecording_b__23_0() ;

/// @brief Method .ctor, addr 0x17a084c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::FileWriter___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__23_0() ;

static inline void setStaticF___9(::VROSC::FileWriter___c*  value) ;

static inline void setStaticF___9__23_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileWriter___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWriter___c(FileWriter___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWriter___c(FileWriter___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1361};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FileWriter/<>c__DisplayClass25_0
class CORDL_TYPE FileWriter___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field loadIntoArray, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadIntoArray, put=__cordl_internal_set_loadIntoArray)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  loadIntoArray;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*  onSuccess;

static inline ::VROSC::FileWriter___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <LoadAudioFromFile>b__0, addr 0x17a0860, size 0x1d4, virtual false, abstract: false, final false
inline void _LoadAudioFromFile_b__0(::UnityEngine::AudioClip*  audioClip) ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get_loadIntoArray() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get_loadIntoArray() ;

constexpr ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set_loadIntoArray(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x17a0858, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileWriter___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c__DisplayClass25_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWriter___c__DisplayClass25_0(FileWriter___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c__DisplayClass25_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWriter___c__DisplayClass25_0(FileWriter___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1362};

/// @brief Field loadIntoArray, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ___loadIntoArray;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass25_0, ___loadIntoArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass25_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter___c__DisplayClass25_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FileWriter/<>c__DisplayClass26_0
class CORDL_TYPE FileWriter___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field filePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_filePath, put=__cordl_internal_set_filePath)) ::StringW  filePath;

/// @brief Field instrumentEventData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_instrumentEventData, put=__cordl_internal_set_instrumentEventData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  instrumentEventData;

static inline ::VROSC::FileWriter___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <SaveInstrumentEventsToFile>b__0, addr 0x17a0a3c, size 0x194, virtual false, abstract: false, final false
inline void _SaveInstrumentEventsToFile_b__0() ;

constexpr ::StringW const& __cordl_internal_get_filePath() const;

constexpr ::StringW& __cordl_internal_get_filePath() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_instrumentEventData() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_instrumentEventData() ;

constexpr void __cordl_internal_set_filePath(::StringW  value) ;

constexpr void __cordl_internal_set_instrumentEventData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method .ctor, addr 0x17a0a34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileWriter___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWriter___c__DisplayClass26_0(FileWriter___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWriter___c__DisplayClass26_0(FileWriter___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1363};

/// @brief Field filePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___filePath;

/// @brief Field instrumentEventData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___instrumentEventData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass26_0, ___filePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass26_0, ___instrumentEventData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter___c__DisplayClass26_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FileWriter/<>c__DisplayClass27_0
class CORDL_TYPE FileWriter___c__DisplayClass27_0 : public ::System::Object {
public:
// Declarations
/// @brief Field filePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_filePath, put=__cordl_internal_set_filePath)) ::StringW  filePath;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  onSuccess;

static inline ::VROSC::FileWriter___c__DisplayClass27_0* New_ctor() ;

/// @brief Method <LoadInstrumentEventsFromFile>b__0, addr 0x17a0bd8, size 0x3c, virtual false, abstract: false, final false
inline void _LoadInstrumentEventsFromFile_b__0() ;

constexpr ::StringW const& __cordl_internal_get_filePath() const;

constexpr ::StringW& __cordl_internal_get_filePath() ;

constexpr ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set_filePath(::StringW  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  value) ;

/// @brief Method .ctor, addr 0x17a0bd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileWriter___c__DisplayClass27_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c__DisplayClass27_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWriter___c__DisplayClass27_0(FileWriter___c__DisplayClass27_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c__DisplayClass27_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWriter___c__DisplayClass27_0(FileWriter___c__DisplayClass27_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1364};

/// @brief Field filePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___filePath;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass27_0, ___filePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass27_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter___c__DisplayClass27_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FileWriter/<>c__DisplayClass30_0
class CORDL_TYPE FileWriter___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field audioData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioData, put=__cordl_internal_set_audioData)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field channels, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field interleavedAudioData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_interleavedAudioData, put=__cordl_internal_set_interleavedAudioData)) ::ArrayW<float_t,::Array<float_t>*>  interleavedAudioData;

/// @brief Field normalizeMultiplier, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalizeMultiplier, put=__cordl_internal_set_normalizeMultiplier)) float_t  normalizeMultiplier;

/// @brief Field onProgress, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onProgress, put=__cordl_internal_set_onProgress)) ::System::Action_1<float_t>*  onProgress;

/// @brief Field samples, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_samples, put=__cordl_internal_set_samples)) int32_t  samples;

/// @brief Field startSample, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_startSample, put=__cordl_internal_set_startSample)) int32_t  startSample;

static inline ::VROSC::FileWriter___c__DisplayClass30_0* New_ctor() ;

/// @brief Method <SavePreviewToFile>b__0, addr 0x17a0c1c, size 0x114, virtual false, abstract: false, final false
inline void _SavePreviewToFile_b__0() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get_audioData() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get_audioData() ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_interleavedAudioData() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_interleavedAudioData() ;

constexpr float_t const& __cordl_internal_get_normalizeMultiplier() const;

constexpr float_t& __cordl_internal_get_normalizeMultiplier() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_onProgress() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_onProgress() ;

constexpr int32_t const& __cordl_internal_get_samples() const;

constexpr int32_t& __cordl_internal_get_samples() ;

constexpr int32_t const& __cordl_internal_get_startSample() const;

constexpr int32_t& __cordl_internal_get_startSample() ;

constexpr void __cordl_internal_set_audioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_interleavedAudioData(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_normalizeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_onProgress(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set_samples(int32_t  value) ;

constexpr void __cordl_internal_set_startSample(int32_t  value) ;

/// @brief Method .ctor, addr 0x17a0c14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileWriter___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c__DisplayClass30_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWriter___c__DisplayClass30_0(FileWriter___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c__DisplayClass30_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWriter___c__DisplayClass30_0(FileWriter___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1365};

/// @brief Field channels, offset: 0x10, size: 0x4, def value: None
 int32_t  ___channels;

/// @brief Field audioData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ___audioData;

/// @brief Field startSample, offset: 0x20, size: 0x4, def value: None
 int32_t  ___startSample;

/// @brief Field normalizeMultiplier, offset: 0x24, size: 0x4, def value: None
 float_t  ___normalizeMultiplier;

/// @brief Field onProgress, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___onProgress;

/// @brief Field interleavedAudioData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___interleavedAudioData;

/// @brief Field samples, offset: 0x38, size: 0x4, def value: None
 int32_t  ___samples;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass30_0, ___channels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass30_0, ___audioData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass30_0, ___startSample) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass30_0, ___normalizeMultiplier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass30_0, ___onProgress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass30_0, ___interleavedAudioData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass30_0, ___samples) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter___c__DisplayClass30_0, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FileWriter/<>c__DisplayClass31_0
class CORDL_TYPE FileWriter___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onSuccess, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  onSuccess;

static inline ::VROSC::FileWriter___c__DisplayClass31_0* New_ctor() ;

/// @brief Method <LoadPreviewFromFile>b__0, addr 0x17a0d38, size 0x1c, virtual false, abstract: false, final false
inline void _LoadPreviewFromFile_b__0(::UnityEngine::AudioClip*  audioClip) ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

/// @brief Method .ctor, addr 0x17a0d30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileWriter___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c__DisplayClass31_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWriter___c__DisplayClass31_0(FileWriter___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWriter___c__DisplayClass31_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWriter___c__DisplayClass31_0(FileWriter___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1366};

/// @brief Field onSuccess, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter___c__DisplayClass31_0, ___onSuccess) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter___c__DisplayClass31_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<ExportTapeRecording>d__23
struct CORDL_TYPE FileWriter__ExportTapeRecording_d__23 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a0d54, size 0x500, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a137c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__ExportTapeRecording_d__23() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "songName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "audioData", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: None }, CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "endIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "_tempAudioFilePath_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__ExportTapeRecording_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  songName, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  startIndex, int32_t  endIndex, int32_t  sampleRate, int32_t  channels, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action*  onSuccess, ::StringW  _tempAudioFilePath_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1367};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field songName, offset: 0x28, size: 0x8, def value: None
 ::StringW  songName;

/// @brief Field audioData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field startIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  startIndex;

/// @brief Field endIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  endIndex;

/// @brief Field sampleRate, offset: 0x40, size: 0x4, def value: None
 int32_t  sampleRate;

/// @brief Field channels, offset: 0x44, size: 0x4, def value: None
 int32_t  channels;

/// @brief Field onFailure, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <tempAudioFilePath>5__2, offset: 0x58, size: 0x8, def value: None
 ::StringW  _tempAudioFilePath_5__2;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, songName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, audioData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, startIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, endIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, sampleRate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, channels) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, onFailure) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, onSuccess) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, _tempAudioFilePath_5__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__ExportTapeRecording_d__23, __u__1) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__ExportTapeRecording_d__23, 0x68>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<GetAudioClip>d__38
struct CORDL_TYPE FileWriter__GetAudioClip_d__38 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a1388, size 0x620, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a19a8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__GetAudioClip_d__38() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_webRequest_5__3", ty: "::UnityEngine::Networking::UnityWebRequestAsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__GetAudioClip_d__38(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  filePath, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::UnityEngine::Networking::UnityWebRequest*  _www_5__2, ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  _webRequest_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1368};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field filePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  filePath;

/// @brief Field onSuccess, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  onSuccess;

/// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <www>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _www_5__2;

/// @brief Field <webRequest>5__3, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  _webRequest_5__3;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__GetAudioClip_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetAudioClip_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetAudioClip_d__38, filePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetAudioClip_d__38, onSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetAudioClip_d__38, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetAudioClip_d__38, _www_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetAudioClip_d__38, _webRequest_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetAudioClip_d__38, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__GetAudioClip_d__38, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<GetTextFile>d__18
struct CORDL_TYPE FileWriter__GetTextFile_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a1a10, size 0x534, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a1f44, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__GetTextFile_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_webRequest_5__3", ty: "::UnityEngine::Networking::UnityWebRequestAsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__GetTextFile_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  filePath, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::UnityEngine::Networking::UnityWebRequest*  _www_5__2, ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  _webRequest_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1369};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field filePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  filePath;

/// @brief Field onSuccess, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  onSuccess;

/// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <www>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _www_5__2;

/// @brief Field <webRequest>5__3, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  _webRequest_5__3;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__GetTextFile_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetTextFile_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetTextFile_d__18, filePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetTextFile_d__18, onSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetTextFile_d__18, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetTextFile_d__18, _www_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetTextFile_d__18, _webRequest_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__GetTextFile_d__18, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__GetTextFile_d__18, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<LoadAudioFromFile>d__25
struct CORDL_TYPE FileWriter__LoadAudioFromFile_d__25 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a1fac, size 0x2ac, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a2258, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__LoadAudioFromFile_d__25() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "loadIntoArray", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__LoadAudioFromFile_d__25(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  loadIntoArray, ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*  onSuccess, ::StringW  folderName, ::StringW  fileName, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field loadIntoArray, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  loadIntoArray;

/// @brief Field onSuccess, offset: 0x28, size: 0x8, def value: None
 ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*  onSuccess;

/// @brief Field folderName, offset: 0x30, size: 0x8, def value: None
 ::StringW  folderName;

/// @brief Field fileName, offset: 0x38, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field onFailure, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__LoadAudioFromFile_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadAudioFromFile_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadAudioFromFile_d__25, loadIntoArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadAudioFromFile_d__25, onSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadAudioFromFile_d__25, folderName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadAudioFromFile_d__25, fileName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadAudioFromFile_d__25, onFailure) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadAudioFromFile_d__25, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__LoadAudioFromFile_d__25, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<LoadInstrumentEventsFromFile>d__27
struct CORDL_TYPE FileWriter__LoadInstrumentEventsFromFile_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a22c0, size 0x29c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a255c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__LoadInstrumentEventsFromFile_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__LoadInstrumentEventsFromFile_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  onSuccess, ::StringW  folderName, ::StringW  fileName, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1371};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  onSuccess;

/// @brief Field folderName, offset: 0x28, size: 0x8, def value: None
 ::StringW  folderName;

/// @brief Field fileName, offset: 0x30, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__LoadInstrumentEventsFromFile_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadInstrumentEventsFromFile_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadInstrumentEventsFromFile_d__27, onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadInstrumentEventsFromFile_d__27, folderName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadInstrumentEventsFromFile_d__27, fileName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadInstrumentEventsFromFile_d__27, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__LoadInstrumentEventsFromFile_d__27, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<LoadPatchFile>d__20
struct CORDL_TYPE FileWriter__LoadPatchFile_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a25c4, size 0x2a4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a2868, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__LoadPatchFile_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__LoadPatchFile_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  folderName, ::StringW  fileName, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1372};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field folderName, offset: 0x20, size: 0x8, def value: None
 ::StringW  folderName;

/// @brief Field fileName, offset: 0x28, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  onSuccess;

/// @brief Field onFailure, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__LoadPatchFile_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPatchFile_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPatchFile_d__20, folderName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPatchFile_d__20, fileName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPatchFile_d__20, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPatchFile_d__20, onFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPatchFile_d__20, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__LoadPatchFile_d__20, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<LoadPreviewFromFile>d__31
struct CORDL_TYPE FileWriter__LoadPreviewFromFile_d__31 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a28d0, size 0x2c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a2b90, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__LoadPreviewFromFile_d__31() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*", modifiers: "", def_value: None }, CppParam { name: "isTemp", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isOgg", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__LoadPreviewFromFile_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  onSuccess, bool  isTemp, ::StringW  fileName, bool  isOgg, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1373};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  onSuccess;

/// @brief Field isTemp, offset: 0x28, size: 0x1, def value: None
 bool  isTemp;

/// @brief Field fileName, offset: 0x30, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field isOgg, offset: 0x38, size: 0x1, def value: None
 bool  isOgg;

/// @brief Field onFailure, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__LoadPreviewFromFile_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPreviewFromFile_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPreviewFromFile_d__31, onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPreviewFromFile_d__31, isTemp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPreviewFromFile_d__31, fileName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPreviewFromFile_d__31, isOgg) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPreviewFromFile_d__31, onFailure) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadPreviewFromFile_d__31, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__LoadPreviewFromFile_d__31, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<LoadSampleFile>d__22
struct CORDL_TYPE FileWriter__LoadSampleFile_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a2bf8, size 0x2a4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a2e9c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__LoadSampleFile_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__LoadSampleFile_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  folderName, ::StringW  fileName, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field folderName, offset: 0x20, size: 0x8, def value: None
 ::StringW  folderName;

/// @brief Field fileName, offset: 0x28, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  onSuccess;

/// @brief Field onFailure, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__LoadSampleFile_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadSampleFile_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadSampleFile_d__22, folderName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadSampleFile_d__22, fileName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadSampleFile_d__22, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadSampleFile_d__22, onFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__LoadSampleFile_d__22, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__LoadSampleFile_d__22, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<SaveAudioToFile>d__24
struct CORDL_TYPE FileWriter__SaveAudioToFile_d__24 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a2f04, size 0x4b4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a33b8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__SaveAudioToFile_d__24() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "audioData", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: None }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "normalizeMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startSample", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "endSample", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "leadingSilentSamples", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__SaveAudioToFile_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  folderName, ::StringW  fileName, ::System::Action_1<::VROSC::Error>*  onFailure, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  sampleRate, int32_t  channels, float_t  normalizeMultiplier, int32_t  startSample, int32_t  endSample, int32_t  leadingSilentSamples, ::System::Action*  onSuccess, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field folderName, offset: 0x20, size: 0x8, def value: None
 ::StringW  folderName;

/// @brief Field fileName, offset: 0x28, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field audioData, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field sampleRate, offset: 0x40, size: 0x4, def value: None
 int32_t  sampleRate;

/// @brief Field channels, offset: 0x44, size: 0x4, def value: None
 int32_t  channels;

/// @brief Field normalizeMultiplier, offset: 0x48, size: 0x4, def value: None
 float_t  normalizeMultiplier;

/// @brief Field startSample, offset: 0x4c, size: 0x4, def value: None
 int32_t  startSample;

/// @brief Field endSample, offset: 0x50, size: 0x4, def value: None
 int32_t  endSample;

/// @brief Field leadingSilentSamples, offset: 0x54, size: 0x4, def value: None
 int32_t  leadingSilentSamples;

/// @brief Field onSuccess, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, folderName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, fileName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, audioData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, sampleRate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, channels) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, normalizeMultiplier) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, startSample) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, endSample) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, leadingSilentSamples) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, onSuccess) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveAudioToFile_d__24, __u__1) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__SaveAudioToFile_d__24, 0x68>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<SaveInstrumentEventsToFile>d__26
struct CORDL_TYPE FileWriter__SaveInstrumentEventsToFile_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a3420, size 0x544, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a3964, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__SaveInstrumentEventsToFile_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "instrumentEventData", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__SaveInstrumentEventsToFile_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::ArrayW<uint8_t,::Array<uint8_t>*>  instrumentEventData, ::StringW  folderName, ::StringW  fileName, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action*  onSuccess, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field instrumentEventData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  instrumentEventData;

/// @brief Field folderName, offset: 0x28, size: 0x8, def value: None
 ::StringW  folderName;

/// @brief Field fileName, offset: 0x30, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field onFailure, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26, instrumentEventData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26, folderName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26, fileName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26, onFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26, onSuccess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<SavePatchToFile>d__19
struct CORDL_TYPE FileWriter__SavePatchToFile_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a39cc, size 0x61c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a3fe8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__SavePatchToFile_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "_sw_5__2", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__SavePatchToFile_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  folderName, ::StringW  fileName, ::System::Action_1<::VROSC::Error>*  onFailure, ::StringW  text, ::System::Action*  onSuccess, ::System::IO::StreamWriter*  _sw_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1377};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field folderName, offset: 0x20, size: 0x8, def value: None
 ::StringW  folderName;

/// @brief Field fileName, offset: 0x28, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field text, offset: 0x38, size: 0x8, def value: None
 ::StringW  text;

/// @brief Field onSuccess, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <sw>5__2, offset: 0x48, size: 0x8, def value: None
 ::System::IO::StreamWriter*  _sw_5__2;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__SavePatchToFile_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePatchToFile_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePatchToFile_d__19, folderName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePatchToFile_d__19, fileName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePatchToFile_d__19, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePatchToFile_d__19, text) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePatchToFile_d__19, onSuccess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePatchToFile_d__19, _sw_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePatchToFile_d__19, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__SavePatchToFile_d__19, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<SavePreviewToFile>d__30
struct CORDL_TYPE FileWriter__SavePreviewToFile_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a4050, size 0x724, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a4774, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__SavePreviewToFile_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "audioData", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: None }, CppParam { name: "startSample", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "normalizeMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "onProgress", ty: "::System::Action_1<float_t>*", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "useOgg", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "endSample", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::FileWriter___c__DisplayClass30_0*", modifiers: "", def_value: None }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "_filePath_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__SavePreviewToFile_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, int32_t  channels, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  startSample, float_t  normalizeMultiplier, ::System::Action_1<float_t>*  onProgress, ::StringW  folderName, ::StringW  fileName, bool  useOgg, ::System::Action_1<::VROSC::Error>*  onFailure, int32_t  endSample, ::VROSC::FileWriter___c__DisplayClass30_0*  __8__1, int32_t  sampleRate, ::System::Action*  onSuccess, ::StringW  _filePath_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1378};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field channels, offset: 0x20, size: 0x4, def value: None
 int32_t  channels;

/// @brief Field audioData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field startSample, offset: 0x30, size: 0x4, def value: None
 int32_t  startSample;

/// @brief Field normalizeMultiplier, offset: 0x34, size: 0x4, def value: None
 float_t  normalizeMultiplier;

/// @brief Field onProgress, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<float_t>*  onProgress;

/// @brief Field folderName, offset: 0x40, size: 0x8, def value: None
 ::StringW  folderName;

/// @brief Field fileName, offset: 0x48, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field useOgg, offset: 0x50, size: 0x1, def value: None
 bool  useOgg;

/// @brief Field onFailure, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field endSample, offset: 0x60, size: 0x4, def value: None
 int32_t  endSample;

/// @brief Field <>8__1, offset: 0x68, size: 0x8, def value: None
 ::VROSC::FileWriter___c__DisplayClass30_0*  __8__1;

/// @brief Field sampleRate, offset: 0x70, size: 0x4, def value: None
 int32_t  sampleRate;

/// @brief Field onSuccess, offset: 0x78, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <filePath>5__2, offset: 0x80, size: 0x8, def value: None
 ::StringW  _filePath_5__2;

/// @brief Field <>u__1, offset: 0x88, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, channels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, audioData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, startSample) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, normalizeMultiplier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, onProgress) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, folderName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, fileName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, useOgg) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, onFailure) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, endSample) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, __8__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, sampleRate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, onSuccess) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, _filePath_5__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SavePreviewToFile_d__30, __u__1) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__SavePreviewToFile_d__30, 0x90>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FileWriter/<SaveSampleToFile>d__21
struct CORDL_TYPE FileWriter__SaveSampleToFile_d__21 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a47dc, size 0x5bc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a4d98, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileWriter__SaveSampleToFile_d__21() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "audioClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FileWriter__SaveSampleToFile_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  folderName, ::StringW  fileName, ::System::Action_1<::VROSC::Error>*  onFailure, ::UnityW<::UnityEngine::AudioClip>  audioClip, ::System::Action*  onSuccess, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1379};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field folderName, offset: 0x20, size: 0x8, def value: None
 ::StringW  folderName;

/// @brief Field fileName, offset: 0x28, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field audioClip, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  audioClip;

/// @brief Field onSuccess, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FileWriter__SaveSampleToFile_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveSampleToFile_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveSampleToFile_d__21, folderName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveSampleToFile_d__21, fileName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveSampleToFile_d__21, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveSampleToFile_d__21, audioClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveSampleToFile_d__21, onSuccess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FileWriter__SaveSampleToFile_d__21, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter__SaveSampleToFile_d__21, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FileWriter
class CORDL_TYPE FileWriter : public ::System::Object {
public:
// Declarations
using _ExportTapeRecording_d__23 = ::VROSC::FileWriter__ExportTapeRecording_d__23;

using _GetAudioClip_d__38 = ::VROSC::FileWriter__GetAudioClip_d__38;

using _GetTextFile_d__18 = ::VROSC::FileWriter__GetTextFile_d__18;

using _LoadAudioFromFile_d__25 = ::VROSC::FileWriter__LoadAudioFromFile_d__25;

using _LoadInstrumentEventsFromFile_d__27 = ::VROSC::FileWriter__LoadInstrumentEventsFromFile_d__27;

using _LoadPatchFile_d__20 = ::VROSC::FileWriter__LoadPatchFile_d__20;

using _LoadPreviewFromFile_d__31 = ::VROSC::FileWriter__LoadPreviewFromFile_d__31;

using _LoadSampleFile_d__22 = ::VROSC::FileWriter__LoadSampleFile_d__22;

using _SaveAudioToFile_d__24 = ::VROSC::FileWriter__SaveAudioToFile_d__24;

using _SaveInstrumentEventsToFile_d__26 = ::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26;

using _SavePatchToFile_d__19 = ::VROSC::FileWriter__SavePatchToFile_d__19;

using _SavePreviewToFile_d__30 = ::VROSC::FileWriter__SavePreviewToFile_d__30;

using _SaveSampleToFile_d__21 = ::VROSC::FileWriter__SaveSampleToFile_d__21;

using __c = ::VROSC::FileWriter___c;

using __c__DisplayClass25_0 = ::VROSC::FileWriter___c__DisplayClass25_0;

using __c__DisplayClass26_0 = ::VROSC::FileWriter___c__DisplayClass26_0;

using __c__DisplayClass27_0 = ::VROSC::FileWriter___c__DisplayClass27_0;

using __c__DisplayClass30_0 = ::VROSC::FileWriter___c__DisplayClass30_0;

using __c__DisplayClass31_0 = ::VROSC::FileWriter___c__DisplayClass31_0;

/// @brief Field _cachedClip, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedClip, put=setStaticF__cachedClip)) ::UnityW<::UnityEngine::AudioClip>  _cachedClip;

/// @brief Method ConvertToSByteArray, addr 0x17a0060, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<int8_t,::Array<int8_t>*> ConvertToSByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  byteArray, int32_t  length) ;

/// @brief Method CopySession, addr 0x179f220, size 0x160, virtual false, abstract: false, final false
static inline ::VROSC::Error CopySession(::StringW  originSession, ::StringW  destinationSession, bool  fromTemp) ;

/// @brief Method DeletePreview, addr 0x179eca4, size 0x1ac, virtual false, abstract: false, final false
static inline void DeletePreview(::StringW  fileName, bool  isTemp, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method DeleteSession, addr 0x179eac8, size 0x10c, virtual false, abstract: false, final false
static inline void DeleteSession(::StringW  sessionId, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_2<::StringW,::VROSC::Error>*  onFailure) ;

/// @brief Method DoesPreviewExist, addr 0x179e8c4, size 0x6c, virtual false, abstract: false, final false
static inline bool DoesPreviewExist(::StringW  fileName, bool  isTemp, bool  isOgg) ;

/// @brief Method ExportTapeRecording, addr 0x179d170, size 0xdc, virtual false, abstract: false, final false
static inline void ExportTapeRecording(::StringW  songName, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  startIndex, int32_t  endIndex, int32_t  sampleRate, int32_t  channels, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method FindUniqueExportPath, addr 0x17a0720, size 0xc8, virtual false, abstract: false, final false
static inline ::StringW FindUniqueExportPath(::StringW  basePath, ::StringW  fileExtension) ;

/// @brief Method GetAudioClip, addr 0x179f380, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* GetAudioClip(::StringW  filePath, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method GetAudioDataFilePath, addr 0x17a042c, size 0x94, virtual false, abstract: false, final false
static inline ::StringW GetAudioDataFilePath(::StringW  folderPath, ::StringW  filename) ;

/// @brief Method GetAudioDataFolderPath, addr 0x17a0384, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW GetAudioDataFolderPath(::StringW  folderName) ;

/// @brief Method GetInstrumentEventsFilePath, addr 0x17a0568, size 0x94, virtual false, abstract: false, final false
static inline ::StringW GetInstrumentEventsFilePath(::StringW  folderPath, ::StringW  filename) ;

/// @brief Method GetInstrumentEventsFolderPath, addr 0x17a04c0, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW GetInstrumentEventsFolderPath(::StringW  folderName) ;

/// @brief Method GetMimeType, addr 0x179fedc, size 0x184, virtual false, abstract: false, final false
static inline ::StringW GetMimeType(::StringW  fileEnding) ;

/// @brief Method GetPatchesFilePath, addr 0x17a01b4, size 0x94, virtual false, abstract: false, final false
static inline ::StringW GetPatchesFilePath(::StringW  folderPath, ::StringW  filename) ;

/// @brief Method GetPatchesFolderPath, addr 0x17a010c, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW GetPatchesFolderPath(::StringW  folderName) ;

/// @brief Method GetPreviewsFilePath, addr 0x179e9d4, size 0xf4, virtual false, abstract: false, final false
static inline ::StringW GetPreviewsFilePath(::StringW  folderPath, ::StringW  filename, bool  useOgg) ;

/// @brief Method GetPreviewsFolderPath, addr 0x179e930, size 0xa4, virtual false, abstract: false, final false
static inline ::StringW GetPreviewsFolderPath(::StringW  folderName, bool  isTemp) ;

/// @brief Method GetSamplesFilePath, addr 0x17a02f0, size 0x94, virtual false, abstract: false, final false
static inline ::StringW GetSamplesFilePath(::StringW  folderPath, ::StringW  filename) ;

/// @brief Method GetSamplesFolderPath, addr 0x17a0248, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW GetSamplesFolderPath(::StringW  folderName) ;

/// @brief Method GetSanitizedFileName, addr 0x17a05fc, size 0x124, virtual false, abstract: false, final false
static inline ::StringW GetSanitizedFileName(::StringW  fileName) ;

/// @brief Method GetSaveFilePath, addr 0x179ebd4, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW GetSaveFilePath(::StringW  filename, bool  isTemp) ;

/// @brief Method GetTextFile, addr 0x179ccec, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* GetTextFile(::StringW  filePath, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadAudioFromFile, addr 0x179d380, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* LoadAudioFromFile(::StringW  folderName, ::StringW  fileName, ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  loadIntoArray) ;

/// @brief Method LoadInstrumentEventsFromFile, addr 0x179d558, size 0xd4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* LoadInstrumentEventsFromFile(::StringW  folderName, ::StringW  fileName, ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadPatchFile, addr 0x179ceb4, size 0xe8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* LoadPatchFile(::StringW  folderName, ::StringW  fileName, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadPreviewFromFile, addr 0x179e7c8, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* LoadPreviewFromFile(::StringW  fileName, bool  isTemp, bool  isOgg, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadSampleFile, addr 0x179d088, size 0xe8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* LoadSampleFile(::StringW  folderName, ::StringW  fileName, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method MoveFileToAndroidMediaStore, addr 0x179f458, size 0xa84, virtual false, abstract: false, final false
static inline void MoveFileToAndroidMediaStore(::StringW  filePath, ::StringW  title, ::StringW  fileEnding, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method MovePreviewToSavesFolder, addr 0x179f06c, size 0x1b4, virtual false, abstract: false, final false
static inline void MovePreviewToSavesFolder(::StringW  fileName) ;

/// @brief Method MoveSessionToSavesFolder, addr 0x179ee50, size 0x21c, virtual false, abstract: false, final false
static inline void MoveSessionToSavesFolder(::StringW  filename) ;

static inline ::VROSC::FileWriter* New_ctor() ;

/// @brief Method SaveAudioToFile, addr 0x179d24c, size 0x134, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* SaveAudioToFile(::StringW  folderName, ::StringW  fileName, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  sampleRate, int32_t  channels, float_t  normalizeMultiplier, int32_t  startSample, int32_t  endSample, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, int32_t  leadingSilentSamples) ;

/// @brief Method SaveInstrumentEventsToFile, addr 0x179d46c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* SaveInstrumentEventsToFile(::StringW  folderName, ::StringW  fileName, ::ArrayW<uint8_t,::Array<uint8_t>*>  instrumentEventData, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveInstrumentEventsToMidiFile, addr 0x179d62c, size 0x3d4, virtual false, abstract: false, final false
static inline void SaveInstrumentEventsToMidiFile(::StringW  folderName, ::StringW  fileName, ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>  instrumentEvents, double_t  bpm, double_t  leadingSilence, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SavePatchToFile, addr 0x179cdc4, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* SavePatchToFile(::StringW  folderName, ::StringW  fileName, ::StringW  text, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SavePreviewToFile, addr 0x179e680, size 0x148, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* SavePreviewToFile(::StringW  folderName, ::StringW  fileName, bool  useOgg, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  sampleRate, int32_t  channels, float_t  normalizeMultiplier, int32_t  startSample, int32_t  endSample, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method SaveSampleToFile, addr 0x179cf9c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* SaveSampleToFile(::StringW  folderName, ::StringW  fileName, ::UnityEngine::AudioClip*  audioClip, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveSongInfoFile, addr 0x179df3c, size 0x744, virtual false, abstract: false, final false
static inline void SaveSongInfoFile(::StringW  folderName, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method .ctor, addr 0x17a07e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::AudioClip> getStaticF__cachedClip() ;

static inline void setStaticF__cachedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWriter(FileWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWriter(FileWriter const& ) = delete;

/// @brief Field AudioDataFileExtension offset 0xffffffff size 0x8
static constexpr ::ConstString  AudioDataFileExtension{u"wav"};

/// @brief Field AudioDataFolderName offset 0xffffffff size 0x8
static constexpr ::ConstString  AudioDataFolderName{u"Clips"};

/// @brief Field BackupSuffix offset 0xffffffff size 0x8
static constexpr ::ConstString  BackupSuffix{u"_bak"};

/// @brief Field ByteFileExtension offset 0xffffffff size 0x8
static constexpr ::ConstString  ByteFileExtension{u"dat"};

/// @brief Field InstrumentEventsFolderName offset 0xffffffff size 0x8
static constexpr ::ConstString  InstrumentEventsFolderName{u"PlayData"};

/// @brief Field MidiFileExtension offset 0xffffffff size 0x8
static constexpr ::ConstString  MidiFileExtension{u"mid"};

/// @brief Field MidiFolderName offset 0xffffffff size 0x8
static constexpr ::ConstString  MidiFolderName{u"Midi"};

/// @brief Field OggFileExtension offset 0xffffffff size 0x8
static constexpr ::ConstString  OggFileExtension{u"ogg"};

/// @brief Field PatchesFileExtension offset 0xffffffff size 0x8
static constexpr ::ConstString  PatchesFileExtension{u"helm"};

/// @brief Field PatchesFolderName offset 0xffffffff size 0x8
static constexpr ::ConstString  PatchesFolderName{u"Patches"};

/// @brief Field PreviewFilePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  PreviewFilePrefix{u"Preview_"};

/// @brief Field PreviewsFolderName offset 0xffffffff size 0x8
static constexpr ::ConstString  PreviewsFolderName{u"Previews"};

/// @brief Field SamplesFileExtension offset 0xffffffff size 0x8
static constexpr ::ConstString  SamplesFileExtension{u"wav"};

/// @brief Field SamplesFolderName offset 0xffffffff size 0x8
static constexpr ::ConstString  SamplesFolderName{u"Samples"};

/// @brief Field SaveFileExtension offset 0xffffffff size 0x8
static constexpr ::ConstString  SaveFileExtension{u"zip"};

/// @brief Field TextFileExtension offset 0xffffffff size 0x8
static constexpr ::ConstString  TextFileExtension{u"txt"};

/// @brief Field VideoFileExtension offset 0xffffffff size 0x8
static constexpr ::ConstString  VideoFileExtension{u"mp4"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::FileWriter, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FileWriter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter*, "VROSC", "FileWriter");
NEED_NO_BOX(::VROSC::FileWriter___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter___c*, "VROSC", "FileWriter/<>c");
NEED_NO_BOX(::VROSC::FileWriter___c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter___c__DisplayClass25_0*, "VROSC", "FileWriter/<>c__DisplayClass25_0");
NEED_NO_BOX(::VROSC::FileWriter___c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter___c__DisplayClass26_0*, "VROSC", "FileWriter/<>c__DisplayClass26_0");
NEED_NO_BOX(::VROSC::FileWriter___c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter___c__DisplayClass27_0*, "VROSC", "FileWriter/<>c__DisplayClass27_0");
NEED_NO_BOX(::VROSC::FileWriter___c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter___c__DisplayClass30_0*, "VROSC", "FileWriter/<>c__DisplayClass30_0");
NEED_NO_BOX(::VROSC::FileWriter___c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter___c__DisplayClass31_0*, "VROSC", "FileWriter/<>c__DisplayClass31_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__ExportTapeRecording_d__23, "VROSC", "FileWriter/<ExportTapeRecording>d__23");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__GetAudioClip_d__38, "VROSC", "FileWriter/<GetAudioClip>d__38");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__GetTextFile_d__18, "VROSC", "FileWriter/<GetTextFile>d__18");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__LoadAudioFromFile_d__25, "VROSC", "FileWriter/<LoadAudioFromFile>d__25");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__LoadInstrumentEventsFromFile_d__27, "VROSC", "FileWriter/<LoadInstrumentEventsFromFile>d__27");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__LoadPatchFile_d__20, "VROSC", "FileWriter/<LoadPatchFile>d__20");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__LoadPreviewFromFile_d__31, "VROSC", "FileWriter/<LoadPreviewFromFile>d__31");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__LoadSampleFile_d__22, "VROSC", "FileWriter/<LoadSampleFile>d__22");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__SaveAudioToFile_d__24, "VROSC", "FileWriter/<SaveAudioToFile>d__24");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__SaveInstrumentEventsToFile_d__26, "VROSC", "FileWriter/<SaveInstrumentEventsToFile>d__26");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__SavePatchToFile_d__19, "VROSC", "FileWriter/<SavePatchToFile>d__19");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__SavePreviewToFile_d__30, "VROSC", "FileWriter/<SavePreviewToFile>d__30");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter__SaveSampleToFile_d__21, "VROSC", "FileWriter/<SaveSampleToFile>d__21");
