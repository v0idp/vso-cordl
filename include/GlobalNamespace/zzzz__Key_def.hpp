#pragma once
// IWYU pragma private; include "GlobalNamespace/Key.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Key)
namespace GlobalNamespace {
struct Key_Type;
}
namespace GlobalNamespace {
class PunchKeyData;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC::UI {
class UIInteractableColoring;
}
// Forward declare root types
namespace GlobalNamespace {
struct Key_Type;
}
namespace GlobalNamespace {
class Key;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Key_Type);
MARK_REF_PTR_T(::GlobalNamespace::Key);
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Key/Type
struct CORDL_TYPE Key_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Key_Type_Unwrapped
enum struct __Key_Type_Unwrapped : int32_t {
__E_ALPHA = static_cast<int32_t>(0x0),
__E_BACKSPACE = static_cast<int32_t>(0x1),
__E_SHIFT = static_cast<int32_t>(0x2),
__E_RETURN = static_cast<int32_t>(0x3),
__E_SYMBOL = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Key_Type_Unwrapped () const noexcept {
return static_cast<__Key_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Key_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Key_Type(int32_t  value__) noexcept;

/// @brief Field ALPHA value: I32(0)
static ::GlobalNamespace::Key_Type const ALPHA;

/// @brief Field BACKSPACE value: I32(1)
static ::GlobalNamespace::Key_Type const BACKSPACE;

/// @brief Field RETURN value: I32(3)
static ::GlobalNamespace::Key_Type const RETURN;

/// @brief Field SHIFT value: I32(2)
static ::GlobalNamespace::Key_Type const SHIFT;

/// @brief Field SYMBOL value: I32(4)
static ::GlobalNamespace::Key_Type const SYMBOL;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Key_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Key_Type, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Key
class CORDL_TYPE Key : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Type = ::GlobalNamespace::Key_Type;

 __declspec(property(get=get_AlterateKeyCapChar)) ::StringW  AlterateKeyCapChar;

 __declspec(property(get=get_KeyCapChar)) ::StringW  KeyCapChar;

/// @brief Field KeyPressed, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_KeyPressed, put=__cordl_internal_set_KeyPressed)) bool  KeyPressed;

 __declspec(property(get=get_KeyType)) ::GlobalNamespace::Key_Type  KeyType;

/// @brief Field OnKeyHit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnKeyHit, put=setStaticF_OnKeyHit)) ::System::Action_2<::UnityW<::GlobalNamespace::Key>,float_t>*  OnKeyHit;

 __declspec(property(get=get_OutputChar)) ::StringW  OutputChar;

/// @brief Field _collider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Field _coloring, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__coloring, put=__cordl_internal_set__coloring)) ::UnityW<::VROSC::UI::UIInteractableColoring>  _coloring;

/// @brief Field _data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::GlobalNamespace::PunchKeyData>  _data;

/// @brief Field _isRepeating, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRepeating, put=__cordl_internal_set__isRepeating)) bool  _isRepeating;

/// @brief Field _pressedTimer, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressedTimer, put=__cordl_internal_set__pressedTimer)) float_t  _pressedTimer;

/// @brief Field _repeatedPressDelay, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__repeatedPressDelay, put=__cordl_internal_set__repeatedPressDelay)) float_t  _repeatedPressDelay;

/// @brief Field _rigidBody, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidBody, put=__cordl_internal_set__rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidBody;

/// @brief Field _startRepeatedPressesDelay, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__startRepeatedPressesDelay, put=__cordl_internal_set__startRepeatedPressesDelay)) float_t  _startRepeatedPressesDelay;

/// @brief Field checkForButton, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_checkForButton, put=__cordl_internal_set_checkForButton)) bool  checkForButton;

/// @brief Field constrainedPosition, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_constrainedPosition, put=__cordl_internal_set_constrainedPosition)) ::UnityEngine::Vector3  constrainedPosition;

/// @brief Field constrainedRotation, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_constrainedRotation, put=__cordl_internal_set_constrainedRotation)) ::UnityEngine::Quaternion  constrainedRotation;

/// @brief Field currentDistance, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentDistance, put=__cordl_internal_set_currentDistance)) float_t  currentDistance;

/// @brief Field initialLocalPosition, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialLocalPosition, put=__cordl_internal_set_initialLocalPosition)) ::UnityEngine::Vector3  initialLocalPosition;

/// @brief Field initialLocalRotation, offset 0x6c, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialLocalRotation, put=__cordl_internal_set_initialLocalRotation)) ::UnityEngine::Quaternion  initialLocalRotation;

/// @brief Field initialPosition, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialPosition, put=__cordl_internal_set_initialPosition)) ::UnityW<::UnityEngine::Transform>  initialPosition;

/// @brief Field keyCapText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyCapText, put=__cordl_internal_set_keyCapText)) ::UnityW<::TMPro::TextMeshPro>  keyCapText;

/// @brief Method ChangeKeyColorOnPress, addr 0x16b76ac, size 0x84, virtual false, abstract: false, final false
inline void ChangeKeyColorOnPress() ;

/// @brief Method ConstrainPosition, addr 0x16b74c8, size 0x90, virtual false, abstract: false, final false
inline void ConstrainPosition() ;

/// @brief Method FixedUpdate, addr 0x16b736c, size 0x15c, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method HitKey, addr 0x16b7820, size 0x138, virtual false, abstract: false, final false
inline void HitKey(bool  send) ;

/// @brief Method LateUpdate, addr 0x16b7730, size 0x4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::Key* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16b7288, size 0xe4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetTextToDefault, addr 0x16b7958, size 0x7c, virtual false, abstract: false, final false
inline void SetTextToDefault() ;

/// @brief Method SettingsUpdated, addr 0x16b722c, size 0x5c, virtual false, abstract: false, final false
inline void SettingsUpdated() ;

/// @brief Method Start, addr 0x16b6dfc, size 0x37c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchKeycapCharCase, addr 0x16b7178, size 0xb4, virtual false, abstract: false, final false
inline void SwitchKeycapCharCase() ;

/// @brief Method SwitchToSymbols, addr 0x16b7734, size 0xec, virtual false, abstract: false, final false
inline void SwitchToSymbols() ;

/// @brief Method Update, addr 0x16b7558, size 0x154, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_KeyPressed() const;

constexpr bool& __cordl_internal_get_KeyPressed() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr ::UnityW<::VROSC::UI::UIInteractableColoring> const& __cordl_internal_get__coloring() const;

constexpr ::UnityW<::VROSC::UI::UIInteractableColoring>& __cordl_internal_get__coloring() ;

constexpr ::UnityW<::GlobalNamespace::PunchKeyData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::GlobalNamespace::PunchKeyData>& __cordl_internal_get__data() ;

constexpr bool const& __cordl_internal_get__isRepeating() const;

constexpr bool& __cordl_internal_get__isRepeating() ;

constexpr float_t const& __cordl_internal_get__pressedTimer() const;

constexpr float_t& __cordl_internal_get__pressedTimer() ;

constexpr float_t const& __cordl_internal_get__repeatedPressDelay() const;

constexpr float_t& __cordl_internal_get__repeatedPressDelay() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidBody() ;

constexpr float_t const& __cordl_internal_get__startRepeatedPressesDelay() const;

constexpr float_t& __cordl_internal_get__startRepeatedPressesDelay() ;

constexpr bool const& __cordl_internal_get_checkForButton() const;

constexpr bool& __cordl_internal_get_checkForButton() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_constrainedPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_constrainedPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_constrainedRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_constrainedRotation() ;

constexpr float_t const& __cordl_internal_get_currentDistance() const;

constexpr float_t& __cordl_internal_get_currentDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialLocalPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialLocalRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialLocalRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_initialPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_initialPosition() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_keyCapText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_keyCapText() ;

constexpr void __cordl_internal_set_KeyPressed(bool  value) ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__coloring(::UnityW<::VROSC::UI::UIInteractableColoring>  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::GlobalNamespace::PunchKeyData>  value) ;

constexpr void __cordl_internal_set__isRepeating(bool  value) ;

constexpr void __cordl_internal_set__pressedTimer(float_t  value) ;

constexpr void __cordl_internal_set__repeatedPressDelay(float_t  value) ;

constexpr void __cordl_internal_set__rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__startRepeatedPressesDelay(float_t  value) ;

constexpr void __cordl_internal_set_checkForButton(bool  value) ;

constexpr void __cordl_internal_set_constrainedPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_constrainedRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_currentDistance(float_t  value) ;

constexpr void __cordl_internal_set_initialLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initialLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_initialPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_keyCapText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x16b79d4, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::UnityW<::GlobalNamespace::Key>,float_t>* getStaticF_OnKeyHit() ;

/// @brief Method get_AlterateKeyCapChar, addr 0x16b6d68, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_AlterateKeyCapChar() ;

/// @brief Method get_KeyCapChar, addr 0x16b6d4c, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_KeyCapChar() ;

/// @brief Method get_KeyType, addr 0x16b6d30, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::Key_Type get_KeyType() ;

/// @brief Method get_OutputChar, addr 0x16b6d84, size 0x78, virtual false, abstract: false, final false
inline ::StringW get_OutputChar() ;

static inline void setStaticF_OnKeyHit(::System::Action_2<::UnityW<::GlobalNamespace::Key>,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Key() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Key", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Key(Key && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Key", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Key(Key const& ) = delete;

/// @brief Field DistanceToBePressed offset 0xffffffff size 0x4
static constexpr float_t  DistanceToBePressed{static_cast<float_t>(0.01f)};

/// @brief Field KeyBounceBackMultiplier offset 0xffffffff size 0x4
static constexpr float_t  KeyBounceBackMultiplier{static_cast<float_t>(1500.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4};

/// @brief Field _data, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PunchKeyData>  ____data;

/// @brief Field _coloring, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIInteractableColoring>  ____coloring;

/// @brief Field _collider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

/// @brief Field _rigidBody, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidBody;

/// @brief Field KeyPressed, offset: 0x40, size: 0x1, def value: None
 bool  ___KeyPressed;

/// @brief Field _startRepeatedPressesDelay, offset: 0x44, size: 0x4, def value: None
 float_t  ____startRepeatedPressesDelay;

/// @brief Field _repeatedPressDelay, offset: 0x48, size: 0x4, def value: None
 float_t  ____repeatedPressDelay;

/// @brief Field initialPosition, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___initialPosition;

/// @brief Field keyCapText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___keyCapText;

/// @brief Field initialLocalPosition, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialLocalPosition;

/// @brief Field initialLocalRotation, offset: 0x6c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialLocalRotation;

/// @brief Field constrainedPosition, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___constrainedPosition;

/// @brief Field constrainedRotation, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___constrainedRotation;

/// @brief Field checkForButton, offset: 0x98, size: 0x1, def value: None
 bool  ___checkForButton;

/// @brief Field currentDistance, offset: 0x9c, size: 0x4, def value: None
 float_t  ___currentDistance;

/// @brief Field _pressedTimer, offset: 0xa0, size: 0x4, def value: None
 float_t  ____pressedTimer;

/// @brief Field _isRepeating, offset: 0xa4, size: 0x1, def value: None
 bool  ____isRepeating;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Key, ____data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ____coloring) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ____collider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ____rigidBody) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ___KeyPressed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ____startRepeatedPressesDelay) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ____repeatedPressDelay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ___initialPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ___keyCapText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ___initialLocalPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ___initialLocalRotation) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ___constrainedPosition) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ___constrainedRotation) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ___checkForButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ___currentDistance) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ____pressedTimer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Key, ____isRepeating) == 0xa4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Key, 0xa8>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Key_Type, "", "Key/Type");
NEED_NO_BOX(::GlobalNamespace::Key);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Key*, "", "Key");
