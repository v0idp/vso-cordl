#pragma once
// IWYU pragma private; include "GlobalNamespace/KeySoundController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeySoundController)
namespace GlobalNamespace {
class KeySoundController__PlayKeySound_d__2;
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
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class KeySoundController;
}
namespace GlobalNamespace {
class KeySoundController__PlayKeySound_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KeySoundController);
MARK_REF_PTR_T(::GlobalNamespace::KeySoundController__PlayKeySound_d__2);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KeySoundController/<PlayKeySound>d__2
class CORDL_TYPE KeySoundController__PlayKeySound_d__2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::KeySoundController>  __4__this;

/// @brief Field <player>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__player_5__2, put=__cordl_internal_set__player_5__2)) ::UnityW<::UnityEngine::GameObject>  _player_5__2;

/// @brief Field keyTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyTransform, put=__cordl_internal_set_keyTransform)) ::UnityW<::UnityEngine::Transform>  keyTransform;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16b800c, size 0x1b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::KeySoundController__PlayKeySound_d__2* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16b81bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16b81c4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16b81fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16b8008, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::KeySoundController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::KeySoundController>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__player_5__2() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__player_5__2() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_keyTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_keyTransform() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::KeySoundController>  value) ;

constexpr void __cordl_internal_set__player_5__2(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_keyTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x16b7fd8, size 0x28, virtual false, abstract: false, final false
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
constexpr KeySoundController__PlayKeySound_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeySoundController__PlayKeySound_d__2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeySoundController__PlayKeySound_d__2(KeySoundController__PlayKeySound_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeySoundController__PlayKeySound_d__2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeySoundController__PlayKeySound_d__2(KeySoundController__PlayKeySound_d__2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KeySoundController>  _____4__this;

/// @brief Field keyTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___keyTransform;

/// @brief Field <player>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____player_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeySoundController__PlayKeySound_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeySoundController__PlayKeySound_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeySoundController__PlayKeySound_d__2, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeySoundController__PlayKeySound_d__2, ___keyTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeySoundController__PlayKeySound_d__2, ____player_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KeySoundController__PlayKeySound_d__2, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KeySoundController
class CORDL_TYPE KeySoundController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PlayKeySound_d__2 = ::GlobalNamespace::KeySoundController__PlayKeySound_d__2;

/// @brief Field KeySoundPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeySoundPlayer, put=__cordl_internal_set_KeySoundPlayer)) ::UnityW<::UnityEngine::GameObject>  KeySoundPlayer;

static inline ::GlobalNamespace::KeySoundController* New_ctor() ;

/// @brief Method PlayKeySound, addr 0x16b7f6c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayKeySound(::UnityEngine::Transform*  keyTransform) ;

/// @brief Method StartKeySound, addr 0x16b7edc, size 0x90, virtual false, abstract: false, final false
inline void StartKeySound(::UnityEngine::Transform*  keyTransform) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_KeySoundPlayer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_KeySoundPlayer() ;

constexpr void __cordl_internal_set_KeySoundPlayer(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x16b8000, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeySoundController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeySoundController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeySoundController(KeySoundController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeySoundController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeySoundController(KeySoundController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7};

/// @brief Field KeySoundPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___KeySoundPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeySoundController, ___KeySoundPlayer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KeySoundController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KeySoundController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KeySoundController*, "", "KeySoundController");
NEED_NO_BOX(::GlobalNamespace::KeySoundController__PlayKeySound_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KeySoundController__PlayKeySound_d__2*, "", "KeySoundController/<PlayKeySound>d__2");
