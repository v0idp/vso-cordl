#pragma once
// IWYU pragma private; include "VROSC/FPSCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FPSCounter)
namespace UnityEngine {
class TextMesh;
}
// Forward declare root types
namespace VROSC {
class FPSCounter;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FPSCounter);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FPSCounter
class CORDL_TYPE FPSCounter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _textMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__textMesh, put=__cordl_internal_set__textMesh)) ::UnityW<::UnityEngine::TextMesh>  _textMesh;

static inline ::VROSC::FPSCounter* New_ctor() ;

/// @brief Method Start, addr 0x1712604, size 0xe0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x17126e4, size 0x88, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get__textMesh() const;

constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get__textMesh() ;

constexpr void __cordl_internal_set__textMesh(::UnityW<::UnityEngine::TextMesh>  value) ;

/// @brief Method .ctor, addr 0x171276c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FPSCounter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FPSCounter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FPSCounter(FPSCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FPSCounter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FPSCounter(FPSCounter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{903};

/// @brief Field _textMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextMesh>  ____textMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FPSCounter, ____textMesh) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FPSCounter, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FPSCounter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FPSCounter*, "VROSC", "FPSCounter");
