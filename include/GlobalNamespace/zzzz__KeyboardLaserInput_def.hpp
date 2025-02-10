#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyboardLaserInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Clickable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardLaserInput)
namespace GlobalNamespace {
class Key;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class KeyboardLaserInput;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KeyboardLaserInput);
// Dependencies VROSC.Clickable
namespace GlobalNamespace {
// Is value type: false
// CS Name: KeyboardLaserInput
class CORDL_TYPE KeyboardLaserInput : public ::VROSC::Clickable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

/// @brief Field _collider, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Field _key, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__key, put=__cordl_internal_set__key)) ::UnityW<::GlobalNamespace::Key>  _key;

/// @brief Field _repeatedClickStartTime, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__repeatedClickStartTime, put=__cordl_internal_set__repeatedClickStartTime)) float_t  _repeatedClickStartTime;

/// @brief Field _repeatedPressDelay, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__repeatedPressDelay, put=__cordl_internal_set__repeatedPressDelay)) float_t  _repeatedPressDelay;

/// @brief Field _sentRepeatedClicks, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__sentRepeatedClicks, put=__cordl_internal_set__sentRepeatedClicks)) int32_t  _sentRepeatedClicks;

/// @brief Field _startRepeatedPressesDelay, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__startRepeatedPressesDelay, put=__cordl_internal_set__startRepeatedPressesDelay)) float_t  _startRepeatedPressesDelay;

/// @brief Method Awake, addr 0x16b7a00, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clicked, addr 0x16b7bf8, size 0x44, virtual false, abstract: false, final false
inline void Clicked(bool  clicked) ;

static inline ::GlobalNamespace::KeyboardLaserInput* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16b7d4c, size 0x17c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SettingsUpdated, addr 0x16b7b80, size 0x78, virtual false, abstract: false, final false
inline void SettingsUpdated() ;

/// @brief Method ShouldSendRepeatedClick, addr 0x16b7c98, size 0xb4, virtual false, abstract: false, final false
inline bool ShouldSendRepeatedClick() ;

/// @brief Method Update, addr 0x16b7c3c, size 0x5c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr ::UnityW<::GlobalNamespace::Key> const& __cordl_internal_get__key() const;

constexpr ::UnityW<::GlobalNamespace::Key>& __cordl_internal_get__key() ;

constexpr float_t const& __cordl_internal_get__repeatedClickStartTime() const;

constexpr float_t& __cordl_internal_get__repeatedClickStartTime() ;

constexpr float_t const& __cordl_internal_get__repeatedPressDelay() const;

constexpr float_t& __cordl_internal_get__repeatedPressDelay() ;

constexpr int32_t const& __cordl_internal_get__sentRepeatedClicks() const;

constexpr int32_t& __cordl_internal_get__sentRepeatedClicks() ;

constexpr float_t const& __cordl_internal_get__startRepeatedPressesDelay() const;

constexpr float_t& __cordl_internal_get__startRepeatedPressesDelay() ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__key(::UnityW<::GlobalNamespace::Key>  value) ;

constexpr void __cordl_internal_set__repeatedClickStartTime(float_t  value) ;

constexpr void __cordl_internal_set__repeatedPressDelay(float_t  value) ;

constexpr void __cordl_internal_set__sentRepeatedClicks(int32_t  value) ;

constexpr void __cordl_internal_set__startRepeatedPressesDelay(float_t  value) ;

/// @brief Method .ctor, addr 0x16b7ec8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x16b79f8, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyboardLaserInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyboardLaserInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyboardLaserInput(KeyboardLaserInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardLaserInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyboardLaserInput(KeyboardLaserInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5};

/// @brief Field _key, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Key>  ____key;

/// @brief Field _collider, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

/// @brief Field _startRepeatedPressesDelay, offset: 0xa0, size: 0x4, def value: None
 float_t  ____startRepeatedPressesDelay;

/// @brief Field _repeatedPressDelay, offset: 0xa4, size: 0x4, def value: None
 float_t  ____repeatedPressDelay;

/// @brief Field _repeatedClickStartTime, offset: 0xa8, size: 0x4, def value: None
 float_t  ____repeatedClickStartTime;

/// @brief Field _sentRepeatedClicks, offset: 0xac, size: 0x4, def value: None
 int32_t  ____sentRepeatedClicks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeyboardLaserInput, ____key) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyboardLaserInput, ____collider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyboardLaserInput, ____startRepeatedPressesDelay) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyboardLaserInput, ____repeatedPressDelay) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyboardLaserInput, ____repeatedClickStartTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyboardLaserInput, ____sentRepeatedClicks) == 0xac, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KeyboardLaserInput, 0xb0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KeyboardLaserInput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KeyboardLaserInput*, "", "KeyboardLaserInput");
