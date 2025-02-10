#pragma once
// IWYU pragma private; include "VROSC/SavWav.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SavWav)
namespace System::IO {
class FileStream;
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
namespace VROSC {
struct SavWav__Save_d__2;
}
namespace VROSC {
class SavWav___c__DisplayClass2_0;
}
// Forward declare root types
namespace VROSC {
class SavWav;
}
namespace VROSC {
class SavWav___c__DisplayClass2_0;
}
namespace VROSC {
struct SavWav__Save_d__2;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SavWav);
MARK_REF_PTR_T(::VROSC::SavWav___c__DisplayClass2_0);
MARK_VAL_T(::VROSC::SavWav__Save_d__2);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SavWav/<>c__DisplayClass2_0
class CORDL_TYPE SavWav___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field audioData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioData, put=__cordl_internal_set_audioData)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field channels, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field endSample, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_endSample, put=__cordl_internal_set_endSample)) int32_t  endSample;

/// @brief Field filePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_filePath, put=__cordl_internal_set_filePath)) ::StringW  filePath;

/// @brief Field leadingSilentSamples, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_leadingSilentSamples, put=__cordl_internal_set_leadingSilentSamples)) int32_t  leadingSilentSamples;

/// @brief Field normalizeMultiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalizeMultiplier, put=__cordl_internal_set_normalizeMultiplier)) float_t  normalizeMultiplier;

/// @brief Field onProgress, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onProgress, put=__cordl_internal_set_onProgress)) ::System::Action_1<float_t>*  onProgress;

/// @brief Field sampleRate, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_sampleRate, put=__cordl_internal_set_sampleRate)) int32_t  sampleRate;

/// @brief Field startSample, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startSample, put=__cordl_internal_set_startSample)) int32_t  startSample;

static inline ::VROSC::SavWav___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <Save>b__0, addr 0x17a5cd4, size 0x1ec, virtual false, abstract: false, final false
inline void _Save_b__0() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get_audioData() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get_audioData() ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr int32_t const& __cordl_internal_get_endSample() const;

constexpr int32_t& __cordl_internal_get_endSample() ;

constexpr ::StringW const& __cordl_internal_get_filePath() const;

constexpr ::StringW& __cordl_internal_get_filePath() ;

constexpr int32_t const& __cordl_internal_get_leadingSilentSamples() const;

constexpr int32_t& __cordl_internal_get_leadingSilentSamples() ;

constexpr float_t const& __cordl_internal_get_normalizeMultiplier() const;

constexpr float_t& __cordl_internal_get_normalizeMultiplier() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_onProgress() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_onProgress() ;

constexpr int32_t const& __cordl_internal_get_sampleRate() const;

constexpr int32_t& __cordl_internal_get_sampleRate() ;

constexpr int32_t const& __cordl_internal_get_startSample() const;

constexpr int32_t& __cordl_internal_get_startSample() ;

constexpr void __cordl_internal_set_audioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_endSample(int32_t  value) ;

constexpr void __cordl_internal_set_filePath(::StringW  value) ;

constexpr void __cordl_internal_set_leadingSilentSamples(int32_t  value) ;

constexpr void __cordl_internal_set_normalizeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_onProgress(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set_sampleRate(int32_t  value) ;

constexpr void __cordl_internal_set_startSample(int32_t  value) ;

/// @brief Method .ctor, addr 0x17a5ccc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SavWav___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SavWav___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SavWav___c__DisplayClass2_0(SavWav___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SavWav___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SavWav___c__DisplayClass2_0(SavWav___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1383};

/// @brief Field filePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___filePath;

/// @brief Field endSample, offset: 0x18, size: 0x4, def value: None
 int32_t  ___endSample;

/// @brief Field startSample, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___startSample;

/// @brief Field audioData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ___audioData;

/// @brief Field normalizeMultiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ___normalizeMultiplier;

/// @brief Field leadingSilentSamples, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___leadingSilentSamples;

/// @brief Field onProgress, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___onProgress;

/// @brief Field sampleRate, offset: 0x38, size: 0x4, def value: None
 int32_t  ___sampleRate;

/// @brief Field channels, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___channels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SavWav___c__DisplayClass2_0, ___filePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav___c__DisplayClass2_0, ___endSample) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav___c__DisplayClass2_0, ___startSample) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav___c__DisplayClass2_0, ___audioData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav___c__DisplayClass2_0, ___normalizeMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav___c__DisplayClass2_0, ___leadingSilentSamples) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav___c__DisplayClass2_0, ___onProgress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav___c__DisplayClass2_0, ___sampleRate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav___c__DisplayClass2_0, ___channels) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SavWav___c__DisplayClass2_0, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SavWav/<Save>d__2
struct CORDL_TYPE SavWav__Save_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17a5ec0, size 0x34c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17a620c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SavWav__Save_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "endSample", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startSample", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "audioData", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: None }, CppParam { name: "normalizeMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leadingSilentSamples", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onProgress", ty: "::System::Action_1<float_t>*", modifiers: "", def_value: None }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SavWav__Save_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  filePath, int32_t  endSample, int32_t  startSample, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, float_t  normalizeMultiplier, int32_t  leadingSilentSamples, ::System::Action_1<float_t>*  onProgress, int32_t  sampleRate, int32_t  channels, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1384};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field filePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  filePath;

/// @brief Field endSample, offset: 0x28, size: 0x4, def value: None
 int32_t  endSample;

/// @brief Field startSample, offset: 0x2c, size: 0x4, def value: None
 int32_t  startSample;

/// @brief Field audioData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field normalizeMultiplier, offset: 0x38, size: 0x4, def value: None
 float_t  normalizeMultiplier;

/// @brief Field leadingSilentSamples, offset: 0x3c, size: 0x4, def value: None
 int32_t  leadingSilentSamples;

/// @brief Field onProgress, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<float_t>*  onProgress;

/// @brief Field sampleRate, offset: 0x48, size: 0x4, def value: None
 int32_t  sampleRate;

/// @brief Field channels, offset: 0x4c, size: 0x4, def value: None
 int32_t  channels;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SavWav__Save_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, filePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, endSample) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, startSample) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, audioData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, normalizeMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, leadingSilentSamples) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, onProgress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, sampleRate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, channels) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SavWav__Save_d__2, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SavWav__Save_d__2, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SavWav
class CORDL_TYPE SavWav : public ::System::Object {
public:
// Declarations
using _Save_d__2 = ::VROSC::SavWav__Save_d__2;

using __c__DisplayClass2_0 = ::VROSC::SavWav___c__DisplayClass2_0;

/// @brief Method ConvertAndWrite, addr 0x17a56ac, size 0x2cc, virtual false, abstract: false, final false
static inline void ConvertAndWrite(::System::IO::FileStream*  fileStream, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, float_t  normalizeMultiplier, int32_t  startSample, int32_t  samples, int32_t  leadingSilentSamples, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method CreateEmpty, addr 0x17a5610, size 0x9c, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* CreateEmpty(::StringW  filePath) ;

/// @brief Method Save, addr 0x17a1254, size 0x128, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* Save(::StringW  filePath, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  sampleRate, int32_t  channels, float_t  normalizeMultiplier, int32_t  startSample, int32_t  endSample, int32_t  leadingSilentSamples, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method WriteHeader, addr 0x17a5978, size 0x354, virtual false, abstract: false, final false
static inline void WriteHeader(::System::IO::FileStream*  fileStream, int32_t  samples, int32_t  hz, int32_t  channels) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SavWav() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SavWav", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SavWav(SavWav && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SavWav", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SavWav(SavWav const& ) = delete;

/// @brief Field BUFFER_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  BUFFER_SIZE{static_cast<int32_t>(0x1000)};

/// @brief Field HEADER_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  HEADER_SIZE{static_cast<int32_t>(0x2c)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::SavWav, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SavWav);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SavWav*, "VROSC", "SavWav");
NEED_NO_BOX(::VROSC::SavWav___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SavWav___c__DisplayClass2_0*, "VROSC", "SavWav/<>c__DisplayClass2_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SavWav__Save_d__2, "VROSC", "SavWav/<Save>d__2");
