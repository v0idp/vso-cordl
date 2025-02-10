#pragma once
// IWYU pragma private; include "VROSC/HDRShader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HDRShader)
// Forward declare root types
namespace VROSC {
class HDRShader;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HDRShader);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HDRShader
class CORDL_TYPE HDRShader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _hdrglow, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__hdrglow, put=__cordl_internal_set__hdrglow)) float_t  _hdrglow;

static inline ::VROSC::HDRShader* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17ac524, size 0x48, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x17ac520, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get__hdrglow() const;

constexpr float_t& __cordl_internal_get__hdrglow() ;

constexpr void __cordl_internal_set__hdrglow(float_t  value) ;

/// @brief Method .ctor, addr 0x17ac56c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HDRShader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HDRShader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HDRShader(HDRShader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HDRShader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HDRShader(HDRShader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1420};

/// @brief Field _hdrglow, offset: 0x20, size: 0x4, def value: None
 float_t  ____hdrglow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HDRShader, ____hdrglow) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HDRShader, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HDRShader);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HDRShader*, "VROSC", "HDRShader");
