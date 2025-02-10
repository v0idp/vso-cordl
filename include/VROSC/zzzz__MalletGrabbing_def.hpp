#pragma once
// IWYU pragma private; include "VROSC/MalletGrabbing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MalletGrabbing)
namespace VROSC {
class MalletSettings;
}
namespace VROSC {
class Mallet;
}
// Forward declare root types
namespace VROSC {
class MalletGrabbing;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MalletGrabbing);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MalletGrabbing
class CORDL_TYPE MalletGrabbing : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _changeTimer, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__changeTimer, put=__cordl_internal_set__changeTimer)) float_t  _changeTimer;

/// @brief Field _hitTimer, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__hitTimer, put=__cordl_internal_set__hitTimer)) float_t  _hitTimer;

/// @brief Field _isGrabbing, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isGrabbing, put=__cordl_internal_set__isGrabbing)) bool  _isGrabbing;

/// @brief Field _laserIsDim, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get__laserIsDim, put=__cordl_internal_set__laserIsDim)) bool  _laserIsDim;

/// @brief Field _laserWasHovering, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__laserWasHovering, put=__cordl_internal_set__laserWasHovering)) bool  _laserWasHovering;

/// @brief Field _mallet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mallet, put=__cordl_internal_set__mallet)) ::UnityW<::VROSC::Mallet>  _mallet;

/// @brief Field _malletSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__malletSettings, put=__cordl_internal_set__malletSettings)) ::UnityW<::VROSC::MalletSettings>  _malletSettings;

/// @brief Field _userDisabledLaser, offset 0x3e, size 0x1 
 __declspec(property(get=__cordl_internal_get__userDisabledLaser, put=__cordl_internal_set__userDisabledLaser)) bool  _userDisabledLaser;

/// @brief Method Awake, addr 0x1719000, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckIfLaserHovering, addr 0x1719404, size 0xac, virtual false, abstract: false, final false
inline void CheckIfLaserHovering() ;

static inline ::VROSC::MalletGrabbing* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17190e0, size 0xe0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnHitDSP, addr 0x17191c0, size 0x84, virtual false, abstract: false, final false
inline void OnHitDSP(float_t  predictedTime, bool  dimLaser) ;

/// @brief Method SetActive, addr 0x1719294, size 0x84, virtual false, abstract: false, final false
inline void SetActive(bool  shouldUseMallets) ;

/// @brief Method SetLaserDimmed, addr 0x1719244, size 0x38, virtual false, abstract: false, final false
inline void SetLaserDimmed(bool  dimmed) ;

/// @brief Method ToggleUserDisabledLaser, addr 0x171927c, size 0x18, virtual false, abstract: false, final false
inline void ToggleUserDisabledLaser() ;

/// @brief Method Update, addr 0x1719318, size 0xec, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__changeTimer() const;

constexpr float_t& __cordl_internal_get__changeTimer() ;

constexpr float_t const& __cordl_internal_get__hitTimer() const;

constexpr float_t& __cordl_internal_get__hitTimer() ;

constexpr bool const& __cordl_internal_get__isGrabbing() const;

constexpr bool& __cordl_internal_get__isGrabbing() ;

constexpr bool const& __cordl_internal_get__laserIsDim() const;

constexpr bool& __cordl_internal_get__laserIsDim() ;

constexpr bool const& __cordl_internal_get__laserWasHovering() const;

constexpr bool& __cordl_internal_get__laserWasHovering() ;

constexpr ::UnityW<::VROSC::Mallet> const& __cordl_internal_get__mallet() const;

constexpr ::UnityW<::VROSC::Mallet>& __cordl_internal_get__mallet() ;

constexpr ::UnityW<::VROSC::MalletSettings> const& __cordl_internal_get__malletSettings() const;

constexpr ::UnityW<::VROSC::MalletSettings>& __cordl_internal_get__malletSettings() ;

constexpr bool const& __cordl_internal_get__userDisabledLaser() const;

constexpr bool& __cordl_internal_get__userDisabledLaser() ;

constexpr void __cordl_internal_set__changeTimer(float_t  value) ;

constexpr void __cordl_internal_set__hitTimer(float_t  value) ;

constexpr void __cordl_internal_set__isGrabbing(bool  value) ;

constexpr void __cordl_internal_set__laserIsDim(bool  value) ;

constexpr void __cordl_internal_set__laserWasHovering(bool  value) ;

constexpr void __cordl_internal_set__mallet(::UnityW<::VROSC::Mallet>  value) ;

constexpr void __cordl_internal_set__malletSettings(::UnityW<::VROSC::MalletSettings>  value) ;

constexpr void __cordl_internal_set__userDisabledLaser(bool  value) ;

/// @brief Method .ctor, addr 0x17194b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MalletGrabbing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MalletGrabbing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MalletGrabbing(MalletGrabbing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MalletGrabbing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MalletGrabbing(MalletGrabbing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{921};

/// @brief Field _mallet, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Mallet>  ____mallet;

/// @brief Field _malletSettings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::MalletSettings>  ____malletSettings;

/// @brief Field _isGrabbing, offset: 0x30, size: 0x1, def value: None
 bool  ____isGrabbing;

/// @brief Field _changeTimer, offset: 0x34, size: 0x4, def value: None
 float_t  ____changeTimer;

/// @brief Field _hitTimer, offset: 0x38, size: 0x4, def value: None
 float_t  ____hitTimer;

/// @brief Field _laserWasHovering, offset: 0x3c, size: 0x1, def value: None
 bool  ____laserWasHovering;

/// @brief Field _laserIsDim, offset: 0x3d, size: 0x1, def value: None
 bool  ____laserIsDim;

/// @brief Field _userDisabledLaser, offset: 0x3e, size: 0x1, def value: None
 bool  ____userDisabledLaser;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MalletGrabbing, ____mallet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletGrabbing, ____malletSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletGrabbing, ____isGrabbing) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletGrabbing, ____changeTimer) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletGrabbing, ____hitTimer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletGrabbing, ____laserWasHovering) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletGrabbing, ____laserIsDim) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletGrabbing, ____userDisabledLaser) == 0x3e, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MalletGrabbing, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MalletGrabbing);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MalletGrabbing*, "VROSC", "MalletGrabbing");
