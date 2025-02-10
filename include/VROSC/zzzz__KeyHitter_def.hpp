#pragma once
// IWYU pragma private; include "VROSC/KeyHitter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KeyHitter)
namespace GlobalNamespace {
class Key;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SimpleHaptic;
}
// Forward declare root types
namespace VROSC {
class KeyHitter;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::KeyHitter);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.KeyHitter
class CORDL_TYPE KeyHitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _device, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__device, put=__cordl_internal_set__device)) ::UnityW<::VROSC::InputDevice>  _device;

/// @brief Field _followTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__followTransform, put=__cordl_internal_set__followTransform)) ::UnityW<::UnityEngine::Transform>  _followTransform;

/// @brief Field _haptic, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__haptic, put=__cordl_internal_set__haptic)) ::VROSC::SimpleHaptic*  _haptic;

/// @brief Field _rigidbody, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _speed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Method Awake, addr 0x1718268, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FollowObject, addr 0x17182fc, size 0x48, virtual false, abstract: false, final false
inline void FollowObject(::UnityEngine::Transform*  followTransform) ;

/// @brief Method KeyPressedHapticFeedback, addr 0x1718680, size 0x30, virtual false, abstract: false, final false
inline void KeyPressedHapticFeedback(::GlobalNamespace::Key*  key) ;

static inline ::VROSC::KeyHitter* New_ctor() ;

/// @brief Method OnDisable, addr 0x171843c, size 0xf8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1718344, size 0xf8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Setup, addr 0x17182b8, size 0x44, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputDevice*  device, ::UnityEngine::Transform*  followTransform) ;

/// @brief Method Update, addr 0x1718534, size 0x14c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__device() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__followTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__followTransform() ;

constexpr ::VROSC::SimpleHaptic* const& __cordl_internal_get__haptic() const;

constexpr ::VROSC::SimpleHaptic*& __cordl_internal_get__haptic() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr void __cordl_internal_set__device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__followTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__haptic(::VROSC::SimpleHaptic*  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

/// @brief Method .ctor, addr 0x17186b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyHitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyHitter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyHitter(KeyHitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyHitter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyHitter(KeyHitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{918};

/// @brief Field _haptic, offset: 0x20, size: 0x8, def value: None
 ::VROSC::SimpleHaptic*  ____haptic;

/// @brief Field _speed, offset: 0x28, size: 0x4, def value: None
 float_t  ____speed;

/// @brief Field _device, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____device;

/// @brief Field _followTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____followTransform;

/// @brief Field _rigidbody, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::KeyHitter, ____haptic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::KeyHitter, ____speed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::KeyHitter, ____device) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::KeyHitter, ____followTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::KeyHitter, ____rigidbody) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::KeyHitter, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::KeyHitter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::KeyHitter*, "VROSC", "KeyHitter");
