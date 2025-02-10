#pragma once
// IWYU pragma private; include "NatSuite/Examples/HotMic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HotMic)
namespace NatSuite::Devices {
class IAudioDevice;
}
namespace NatSuite::Examples::Components {
class ClipRecorder;
}
namespace NatSuite::Examples {
struct HotMic__Start_d__2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace NatSuite::Examples {
class HotMic;
}
namespace NatSuite::Examples {
struct HotMic__Start_d__2;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Examples::HotMic);
MARK_VAL_T(::NatSuite::Examples::HotMic__Start_d__2);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace NatSuite::Examples {
// Is value type: true
// CS Name: NatSuite.Examples.HotMic/<Start>d__2
struct CORDL_TYPE HotMic__Start_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1800c6c, size 0x378, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1800fe4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HotMic__Start_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::NatSuite::Examples::HotMic>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr HotMic__Start_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::NatSuite::Examples::HotMic>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1787};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::NatSuite::Examples::HotMic>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Examples::HotMic__Start_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::HotMic__Start_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::HotMic__Start_d__2, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::HotMic__Start_d__2, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Examples::HotMic__Start_d__2, 0x38>, "Size mismatch!");

} // namespace end def NatSuite::Examples
// Dependencies UnityEngine.MonoBehaviour
namespace NatSuite::Examples {
// Is value type: false
// CS Name: NatSuite.Examples.HotMic
class CORDL_TYPE HotMic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__2 = ::NatSuite::Examples::HotMic__Start_d__2;

/// @brief Field device, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::NatSuite::Devices::IAudioDevice*  device;

/// @brief Field recorder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_recorder, put=__cordl_internal_set_recorder)) ::NatSuite::Examples::Components::ClipRecorder*  recorder;

static inline ::NatSuite::Examples::HotMic* New_ctor() ;

/// @brief Method Start, addr 0x1800578, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartRecording, addr 0x1800608, size 0x36c, virtual false, abstract: false, final false
inline void StartRecording() ;

/// @brief Method StopRecording, addr 0x18009ec, size 0xf8, virtual false, abstract: false, final false
inline void StopRecording() ;

constexpr ::NatSuite::Devices::IAudioDevice* const& __cordl_internal_get_device() const;

constexpr ::NatSuite::Devices::IAudioDevice*& __cordl_internal_get_device() ;

constexpr ::NatSuite::Examples::Components::ClipRecorder* const& __cordl_internal_get_recorder() const;

constexpr ::NatSuite::Examples::Components::ClipRecorder*& __cordl_internal_get_recorder() ;

constexpr void __cordl_internal_set_device(::NatSuite::Devices::IAudioDevice*  value) ;

constexpr void __cordl_internal_set_recorder(::NatSuite::Examples::Components::ClipRecorder*  value) ;

/// @brief Method .ctor, addr 0x1800c64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HotMic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HotMic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HotMic(HotMic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HotMic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HotMic(HotMic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1788};

/// @brief Field device, offset: 0x20, size: 0x8, def value: None
 ::NatSuite::Devices::IAudioDevice*  ___device;

/// @brief Field recorder, offset: 0x28, size: 0x8, def value: None
 ::NatSuite::Examples::Components::ClipRecorder*  ___recorder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Examples::HotMic, ___device) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::HotMic, ___recorder) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Examples::HotMic, 0x30>, "Size mismatch!");

} // namespace end def NatSuite::Examples
NEED_NO_BOX(::NatSuite::Examples::HotMic);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Examples::HotMic*, "NatSuite.Examples", "HotMic");
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Examples::HotMic__Start_d__2, "NatSuite.Examples", "HotMic/<Start>d__2");
