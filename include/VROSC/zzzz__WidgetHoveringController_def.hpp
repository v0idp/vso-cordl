#pragma once
// IWYU pragma private; include "VROSC/WidgetHoveringController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WidgetHoveringController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace VROSC {
class Interactable;
}
namespace VROSC {
class WidgetHoveringController__HideAfterDelay_d__10;
}
namespace VROSC {
class WidgetHoveringNode;
}
// Forward declare root types
namespace VROSC {
class WidgetHoveringController;
}
namespace VROSC {
class WidgetHoveringController__HideAfterDelay_d__10;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::WidgetHoveringController);
MARK_REF_PTR_T(::VROSC::WidgetHoveringController__HideAfterDelay_d__10);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WidgetHoveringController/<HideAfterDelay>d__10
class CORDL_TYPE WidgetHoveringController__HideAfterDelay_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::WidgetHoveringController>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x173d030, size 0xb0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::WidgetHoveringController__HideAfterDelay_d__10* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x173d0e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x173d0e8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x173d120, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x173d02c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::WidgetHoveringController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::WidgetHoveringController>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::WidgetHoveringController>  value) ;

/// @brief Method .ctor, addr 0x173cf40, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WidgetHoveringController__HideAfterDelay_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WidgetHoveringController__HideAfterDelay_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WidgetHoveringController__HideAfterDelay_d__10(WidgetHoveringController__HideAfterDelay_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WidgetHoveringController__HideAfterDelay_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WidgetHoveringController__HideAfterDelay_d__10(WidgetHoveringController__HideAfterDelay_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1100};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::WidgetHoveringController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WidgetHoveringController__HideAfterDelay_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetHoveringController__HideAfterDelay_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetHoveringController__HideAfterDelay_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WidgetHoveringController__HideAfterDelay_d__10, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WidgetHoveringController
class CORDL_TYPE WidgetHoveringController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _HideAfterDelay_d__10 = ::VROSC::WidgetHoveringController__HideAfterDelay_d__10;

/// @brief Field _activators, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__activators, put=__cordl_internal_set__activators)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  _activators;

/// @brief Field _closeAfterSeconds, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__closeAfterSeconds, put=__cordl_internal_set__closeAfterSeconds)) float_t  _closeAfterSeconds;

/// @brief Field _hideWhenNotPointingAt, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hideWhenNotPointingAt, put=__cordl_internal_set__hideWhenNotPointingAt)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _hideWhenNotPointingAt;

/// @brief Field _nodes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodes, put=__cordl_internal_set__nodes)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetHoveringNode>>*  _nodes;

/// @brief Field _reactTo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__reactTo, put=__cordl_internal_set__reactTo)) ::UnityW<::VROSC::Interactable>  _reactTo;

/// @brief Field _shouldBeVisibleWhenPointedAtAgain, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__shouldBeVisibleWhenPointedAtAgain, put=__cordl_internal_set__shouldBeVisibleWhenPointedAtAgain)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _shouldBeVisibleWhenPointedAtAgain;

/// @brief Method ActivateSubObjects, addr 0x173c990, size 0x2dc, virtual false, abstract: false, final false
inline void ActivateSubObjects(bool  shouldBeVisible) ;

/// @brief Method Awake, addr 0x173c5fc, size 0x394, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HideAfterDelay, addr 0x173cee0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* HideAfterDelay() ;

static inline ::VROSC::WidgetHoveringController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x173cc6c, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetHovering, addr 0x173cd44, size 0xc, virtual false, abstract: false, final false
inline void SetHovering(bool  hovering) ;

/// @brief Method SetHoveringWithSender, addr 0x173cd50, size 0x190, virtual false, abstract: false, final false
inline void SetHoveringWithSender(bool  hovering, ::UnityEngine::MonoBehaviour*  sender) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& __cordl_internal_get__activators() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& __cordl_internal_get__activators() ;

constexpr float_t const& __cordl_internal_get__closeAfterSeconds() const;

constexpr float_t& __cordl_internal_get__closeAfterSeconds() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__hideWhenNotPointingAt() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__hideWhenNotPointingAt() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetHoveringNode>>* const& __cordl_internal_get__nodes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetHoveringNode>>*& __cordl_internal_get__nodes() ;

constexpr ::UnityW<::VROSC::Interactable> const& __cordl_internal_get__reactTo() const;

constexpr ::UnityW<::VROSC::Interactable>& __cordl_internal_get__reactTo() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__shouldBeVisibleWhenPointedAtAgain() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__shouldBeVisibleWhenPointedAtAgain() ;

constexpr void __cordl_internal_set__activators(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  value) ;

constexpr void __cordl_internal_set__closeAfterSeconds(float_t  value) ;

constexpr void __cordl_internal_set__hideWhenNotPointingAt(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__nodes(::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetHoveringNode>>*  value) ;

constexpr void __cordl_internal_set__reactTo(::UnityW<::VROSC::Interactable>  value) ;

constexpr void __cordl_internal_set__shouldBeVisibleWhenPointedAtAgain(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x173cf68, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WidgetHoveringController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WidgetHoveringController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WidgetHoveringController(WidgetHoveringController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WidgetHoveringController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WidgetHoveringController(WidgetHoveringController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1101};

/// @brief Field _reactTo, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Interactable>  ____reactTo;

/// @brief Field _nodes, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetHoveringNode>>*  ____nodes;

/// @brief Field _hideWhenNotPointingAt, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____hideWhenNotPointingAt;

/// @brief Field _closeAfterSeconds, offset: 0x38, size: 0x4, def value: None
 float_t  ____closeAfterSeconds;

/// @brief Field _shouldBeVisibleWhenPointedAtAgain, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____shouldBeVisibleWhenPointedAtAgain;

/// @brief Field _activators, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  ____activators;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WidgetHoveringController, ____reactTo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetHoveringController, ____nodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetHoveringController, ____hideWhenNotPointingAt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetHoveringController, ____closeAfterSeconds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetHoveringController, ____shouldBeVisibleWhenPointedAtAgain) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetHoveringController, ____activators) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WidgetHoveringController, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::WidgetHoveringController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WidgetHoveringController*, "VROSC", "WidgetHoveringController");
NEED_NO_BOX(::VROSC::WidgetHoveringController__HideAfterDelay_d__10);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WidgetHoveringController__HideAfterDelay_d__10*, "VROSC", "WidgetHoveringController/<HideAfterDelay>d__10");
