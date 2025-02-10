#pragma once
// IWYU pragma private; include "UnityEngine/Avatar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Avatar)
namespace UnityEngine {
struct HumanDescription;
}
// Forward declare root types
namespace UnityEngine {
class Avatar;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Avatar);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Avatar
class CORDL_TYPE Avatar : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_humanDescription)) ::UnityEngine::HumanDescription  humanDescription;

 __declspec(property(get=get_isHuman)) bool  isHuman;

 __declspec(property(get=get_isValid)) bool  isValid;

static inline ::UnityEngine::Avatar* New_ctor() ;

/// @brief Method .ctor, addr 0x2f53988, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_humanDescription, addr 0x2f539e0, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::HumanDescription get_humanDescription() ;

/// @brief Method get_humanDescription_Injected, addr 0x2f53a4c, size 0x44, virtual false, abstract: false, final false
inline void get_humanDescription_Injected(::ByRef<::UnityEngine::HumanDescription>  ret) ;

/// @brief Method get_isHuman, addr 0x2f53780, size 0x3c, virtual false, abstract: false, final false
inline bool get_isHuman() ;

/// @brief Method get_isValid, addr 0x2f53744, size 0x3c, virtual false, abstract: false, final false
inline bool get_isValid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Avatar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Avatar(Avatar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Avatar(Avatar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12036};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Avatar, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Avatar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Avatar*, "UnityEngine", "Avatar");
