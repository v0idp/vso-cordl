#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CreditsObject)
// Forward declare root types
namespace VROSC::Credits {
class CreditsObject;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Credits::CreditsObject);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.CreditsObject
class CORDL_TYPE CreditsObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Height)) float_t  Height;

/// @brief Field _height, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) float_t  _height;

/// @brief Field _visibility, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__visibility, put=__cordl_internal_set__visibility)) float_t  _visibility;

static inline ::VROSC::Credits::CreditsObject* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x17dcb34, size 0x28, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method SetVisibility, addr 0x17dcb5c, size 0x84, virtual false, abstract: false, final false
inline void SetVisibility(float_t  visible) ;

/// @brief Method UpdateVisibility, addr 0x17dc578, size 0x4, virtual true, abstract: false, final false
inline void UpdateVisibility(float_t  visible) ;

constexpr float_t const& __cordl_internal_get__height() const;

constexpr float_t& __cordl_internal_get__height() ;

constexpr float_t const& __cordl_internal_get__visibility() const;

constexpr float_t& __cordl_internal_get__visibility() ;

constexpr void __cordl_internal_set__height(float_t  value) ;

constexpr void __cordl_internal_set__visibility(float_t  value) ;

/// @brief Method .ctor, addr 0x17dc584, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Height, addr 0x17dcb2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Height() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsObject(CreditsObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsObject(CreditsObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1581};

/// @brief Field _height, offset: 0x20, size: 0x4, def value: None
 float_t  ____height;

/// @brief Field _visibility, offset: 0x24, size: 0x4, def value: None
 float_t  ____visibility;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::CreditsObject, ____height) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsObject, ____visibility) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::CreditsObject, 0x28>, "Size mismatch!");

} // namespace end def VROSC::Credits
NEED_NO_BOX(::VROSC::Credits::CreditsObject);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsObject*, "VROSC.Credits", "CreditsObject");
