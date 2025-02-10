#pragma once
// IWYU pragma private; include "VROSC/MethodRunner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(MethodRunner)
namespace VROSC {
class MethodRunner_RunMethodEvent;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class MethodRunner;
}
namespace VROSC {
class MethodRunner_RunMethodEvent;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MethodRunner);
MARK_REF_PTR_T(::VROSC::MethodRunner_RunMethodEvent);
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MethodRunner/RunMethodEvent
class CORDL_TYPE MethodRunner_RunMethodEvent : public ::UnityEngine::Events::UnityEvent_1<::VROSC::Signal*> {
public:
// Declarations
static inline ::VROSC::MethodRunner_RunMethodEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x171e170, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MethodRunner_RunMethodEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MethodRunner_RunMethodEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodRunner_RunMethodEvent(MethodRunner_RunMethodEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodRunner_RunMethodEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodRunner_RunMethodEvent(MethodRunner_RunMethodEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::MethodRunner_RunMethodEvent, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MethodRunner
class CORDL_TYPE MethodRunner : public ::VROSC::SignalNode {
public:
// Declarations
using RunMethodEvent = ::VROSC::MethodRunner_RunMethodEvent;

/// @brief Field _targetMethod, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetMethod, put=__cordl_internal_set__targetMethod)) ::VROSC::MethodRunner_RunMethodEvent*  _targetMethod;

static inline ::VROSC::MethodRunner* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171e110, size 0x58, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

constexpr ::VROSC::MethodRunner_RunMethodEvent* const& __cordl_internal_get__targetMethod() const;

constexpr ::VROSC::MethodRunner_RunMethodEvent*& __cordl_internal_get__targetMethod() ;

constexpr void __cordl_internal_set__targetMethod(::VROSC::MethodRunner_RunMethodEvent*  value) ;

/// @brief Method .ctor, addr 0x171e168, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MethodRunner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MethodRunner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodRunner(MethodRunner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodRunner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodRunner(MethodRunner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{959};

/// @brief Field _targetMethod, offset: 0x48, size: 0x8, def value: None
 ::VROSC::MethodRunner_RunMethodEvent*  ____targetMethod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MethodRunner, ____targetMethod) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MethodRunner, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MethodRunner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MethodRunner*, "VROSC", "MethodRunner");
NEED_NO_BOX(::VROSC::MethodRunner_RunMethodEvent);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MethodRunner_RunMethodEvent*, "VROSC", "MethodRunner/RunMethodEvent");
