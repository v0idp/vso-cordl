#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseOverEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseOverEvent)
namespace UnityEngine::UIElements {
class MouseOverEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseOverEvent;
}
namespace UnityEngine::UIElements {
class MouseOverEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseOverEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseOverEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseOverEvent/<>c
class CORDL_TYPE MouseOverEvent___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::MouseOverEvent___c*  __9;

static inline ::UnityEngine::UIElements::MouseOverEvent___c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x30f08b4, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::MouseOverEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x30f08ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::MouseOverEvent___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::MouseOverEvent___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseOverEvent___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseOverEvent___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseOverEvent___c(MouseOverEvent___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseOverEvent___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseOverEvent___c(MouseOverEvent___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4057};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseOverEvent___c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseOverEvent
class CORDL_TYPE MouseOverEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOverEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::MouseOverEvent___c;

static inline ::UnityEngine::UIElements::MouseOverEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x30f0808, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseOverEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseOverEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseOverEvent(MouseOverEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseOverEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseOverEvent(MouseOverEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4058};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseOverEvent, 0xb8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseOverEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseOverEvent*, "UnityEngine.UIElements", "MouseOverEvent");
NEED_NO_BOX(::UnityEngine::UIElements::MouseOverEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseOverEvent___c*, "UnityEngine.UIElements", "MouseOverEvent/<>c");
