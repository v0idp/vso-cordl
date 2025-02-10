#pragma once
// IWYU pragma private; include "VROSC/SimpleAppearObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimpleAppearObject)
// Forward declare root types
namespace VROSC {
class SimpleAppearObject;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SimpleAppearObject);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SimpleAppearObject
class CORDL_TYPE SimpleAppearObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Size)) float_t  Size;

/// @brief Field _originalScale, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__originalScale, put=__cordl_internal_set__originalScale)) ::UnityEngine::Vector3  _originalScale;

/// @brief Field _scaleEffect, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__scaleEffect, put=__cordl_internal_set__scaleEffect)) bool  _scaleEffect;

/// @brief Field _setupDone, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__setupDone, put=__cordl_internal_set__setupDone)) bool  _setupDone;

/// @brief Field _size, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) float_t  _size;

static inline ::VROSC::SimpleAppearObject* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x17aa1c8, size 0x54, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Setup, addr 0x17a9668, size 0x40, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateAppearance, addr 0x17a9b44, size 0xe8, virtual false, abstract: false, final false
inline void UpdateAppearance(float_t  amount) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalScale() ;

constexpr bool const& __cordl_internal_get__scaleEffect() const;

constexpr bool& __cordl_internal_get__scaleEffect() ;

constexpr bool const& __cordl_internal_get__setupDone() const;

constexpr bool& __cordl_internal_get__setupDone() ;

constexpr float_t const& __cordl_internal_get__size() const;

constexpr float_t& __cordl_internal_get__size() ;

constexpr void __cordl_internal_set__originalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__scaleEffect(bool  value) ;

constexpr void __cordl_internal_set__setupDone(bool  value) ;

constexpr void __cordl_internal_set__size(float_t  value) ;

/// @brief Method .ctor, addr 0x17aa21c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Size, addr 0x17aa1c0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Size() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleAppearObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleAppearObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleAppearObject(SimpleAppearObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleAppearObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleAppearObject(SimpleAppearObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1409};

/// @brief Field _size, offset: 0x20, size: 0x4, def value: None
 float_t  ____size;

/// @brief Field _scaleEffect, offset: 0x24, size: 0x1, def value: None
 bool  ____scaleEffect;

/// @brief Field _originalScale, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____originalScale;

/// @brief Field _setupDone, offset: 0x34, size: 0x1, def value: None
 bool  ____setupDone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SimpleAppearObject, ____size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SimpleAppearObject, ____scaleEffect) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::SimpleAppearObject, ____originalScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SimpleAppearObject, ____setupDone) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SimpleAppearObject, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SimpleAppearObject);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SimpleAppearObject*, "VROSC", "SimpleAppearObject");
