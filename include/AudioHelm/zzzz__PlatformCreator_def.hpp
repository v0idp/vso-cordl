#pragma once
// IWYU pragma private; include "AudioHelm/PlatformCreator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlatformCreator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace AudioHelm {
class PlatformCreator;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::PlatformCreator);
// Dependencies UnityEngine.KeyCode, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.PlatformCreator
class CORDL_TYPE PlatformCreator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allPlatforms, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_allPlatforms, put=__cordl_internal_set_allPlatforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  allPlatforms;

/// @brief Field clearKey, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_clearKey, put=__cordl_internal_set_clearKey)) ::UnityEngine::KeyCode  clearKey;

/// @brief Field currentPlatform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentPlatform, put=__cordl_internal_set_currentPlatform)) ::UnityW<::UnityEngine::Transform>  currentPlatform;

/// @brief Field minWidth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minWidth, put=__cordl_internal_set_minWidth)) float_t  minWidth;

/// @brief Field platformModel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformModel, put=__cordl_internal_set_platformModel)) ::UnityW<::UnityEngine::Transform>  platformModel;

/// @brief Field startPosition, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_startPosition, put=__cordl_internal_set_startPosition)) ::UnityEngine::Vector2  startPosition;

/// @brief Field undoKey, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_undoKey, put=__cordl_internal_set_undoKey)) ::UnityEngine::KeyCode  undoKey;

/// @brief Method ClearPlatforms, addr 0x181be20, size 0x1b4, virtual false, abstract: false, final false
inline void ClearPlatforms() ;

static inline ::AudioHelm::PlatformCreator* New_ctor() ;

/// @brief Method TryInitialize, addr 0x181baa4, size 0xc0, virtual false, abstract: false, final false
inline void TryInitialize(::UnityEngine::Vector2  position) ;

/// @brief Method TryRelease, addr 0x181bb64, size 0x158, virtual false, abstract: false, final false
inline void TryRelease(::UnityEngine::Vector2  position) ;

/// @brief Method TryUpdate, addr 0x181bcbc, size 0x164, virtual false, abstract: false, final false
inline void TryUpdate(::UnityEngine::Vector2  position) ;

/// @brief Method UndoPlatform, addr 0x181bfd4, size 0xe4, virtual false, abstract: false, final false
inline void UndoPlatform() ;

/// @brief Method Update, addr 0x181c0b8, size 0xb4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_allPlatforms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_allPlatforms() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_clearKey() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_clearKey() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_currentPlatform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_currentPlatform() ;

constexpr float_t const& __cordl_internal_get_minWidth() const;

constexpr float_t& __cordl_internal_get_minWidth() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_platformModel() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_platformModel() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_startPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_startPosition() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_undoKey() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_undoKey() ;

constexpr void __cordl_internal_set_allPlatforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_clearKey(::UnityEngine::KeyCode  value) ;

constexpr void __cordl_internal_set_currentPlatform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_minWidth(float_t  value) ;

constexpr void __cordl_internal_set_platformModel(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_undoKey(::UnityEngine::KeyCode  value) ;

/// @brief Method .ctor, addr 0x181c16c, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformCreator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformCreator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformCreator(PlatformCreator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformCreator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformCreator(PlatformCreator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1859};

/// @brief Field platformModel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___platformModel;

/// @brief Field minWidth, offset: 0x28, size: 0x4, def value: None
 float_t  ___minWidth;

/// @brief Field allPlatforms, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___allPlatforms;

/// @brief Field clearKey, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___clearKey;

/// @brief Field undoKey, offset: 0x3c, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___undoKey;

/// @brief Field currentPlatform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___currentPlatform;

/// @brief Field startPosition, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___startPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::PlatformCreator, ___platformModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::PlatformCreator, ___minWidth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::PlatformCreator, ___allPlatforms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::PlatformCreator, ___clearKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::PlatformCreator, ___undoKey) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::PlatformCreator, ___currentPlatform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::PlatformCreator, ___startPosition) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::PlatformCreator, 0x50>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::PlatformCreator);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::PlatformCreator*, "AudioHelm", "PlatformCreator");
