#pragma once
// IWYU pragma private; include "UnityEngine/ReflectionProbe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbe)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct ReflectionProbe_ReflectionProbeEvent;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
struct ReflectionProbe_ReflectionProbeEvent;
}
namespace UnityEngine {
class ReflectionProbe;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ReflectionProbe_ReflectionProbeEvent);
MARK_REF_PTR_T(::UnityEngine::ReflectionProbe);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ReflectionProbe/ReflectionProbeEvent
struct CORDL_TYPE ReflectionProbe_ReflectionProbeEvent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReflectionProbe_ReflectionProbeEvent_Unwrapped
enum struct __ReflectionProbe_ReflectionProbeEvent_Unwrapped : int32_t {
__E_ReflectionProbeAdded = static_cast<int32_t>(0x0),
__E_ReflectionProbeRemoved = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReflectionProbe_ReflectionProbeEvent_Unwrapped () const noexcept {
return static_cast<__ReflectionProbe_ReflectionProbeEvent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReflectionProbe_ReflectionProbeEvent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReflectionProbe_ReflectionProbeEvent(int32_t  value__) noexcept;

/// @brief Field ReflectionProbeAdded value: I32(0)
static ::UnityEngine::ReflectionProbe_ReflectionProbeEvent const ReflectionProbeAdded;

/// @brief Field ReflectionProbeRemoved value: I32(1)
static ::UnityEngine::ReflectionProbe_ReflectionProbeEvent const ReflectionProbeRemoved;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8412};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ReflectionProbe_ReflectionProbeEvent, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ReflectionProbe_ReflectionProbeEvent, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ReflectionProbe
class CORDL_TYPE ReflectionProbe : public ::UnityEngine::Behaviour {
public:
// Declarations
using ReflectionProbeEvent = ::UnityEngine::ReflectionProbe_ReflectionProbeEvent;

/// @brief Field reflectionProbeChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reflectionProbeChanged, put=setStaticF_reflectionProbeChanged)) ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*  reflectionProbeChanged;

/// @brief Field registeredDefaultReflectionSetActions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registeredDefaultReflectionSetActions, put=setStaticF_registeredDefaultReflectionSetActions)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  registeredDefaultReflectionSetActions;

/// @brief Field registeredDefaultReflectionTextureActions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registeredDefaultReflectionTextureActions, put=setStaticF_registeredDefaultReflectionTextureActions)) ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  registeredDefaultReflectionTextureActions;

/// @brief Method CallReflectionProbeEvent, addr 0x2f60eec, size 0x90, virtual false, abstract: false, final false
static inline void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe*  probe, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent  probeEvent) ;

/// @brief Method CallSetDefaultReflection, addr 0x2f60f7c, size 0x184, virtual false, abstract: false, final false
static inline void CallSetDefaultReflection(::UnityEngine::Texture*  defaultReflectionCubemap) ;

static inline ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* getStaticF_reflectionProbeChanged() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionSetActions() ;

static inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionTextureActions() ;

static inline void setStaticF_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*  value) ;

static inline void setStaticF_registeredDefaultReflectionSetActions(::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  value) ;

static inline void setStaticF_registeredDefaultReflectionTextureActions(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionProbe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionProbe(ReflectionProbe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionProbe(ReflectionProbe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8413};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ReflectionProbe, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe_ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
NEED_NO_BOX(::UnityEngine::ReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
