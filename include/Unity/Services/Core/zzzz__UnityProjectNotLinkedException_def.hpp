#pragma once
// IWYU pragma private; include "Unity/Services/Core/UnityProjectNotLinkedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/zzzz__ServicesInitializationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityProjectNotLinkedException)
// Forward declare root types
namespace Unity::Services::Core {
class UnityProjectNotLinkedException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::UnityProjectNotLinkedException);
// Dependencies Unity.Services.Core.ServicesInitializationException
namespace Unity::Services::Core {
// Is value type: false
// CS Name: Unity.Services.Core.UnityProjectNotLinkedException
class CORDL_TYPE UnityProjectNotLinkedException : public ::Unity::Services::Core::ServicesInitializationException {
public:
// Declarations
static inline ::Unity::Services::Core::UnityProjectNotLinkedException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x2e9b9d4, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityProjectNotLinkedException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityProjectNotLinkedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityProjectNotLinkedException(UnityProjectNotLinkedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityProjectNotLinkedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityProjectNotLinkedException(UnityProjectNotLinkedException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12490};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::UnityProjectNotLinkedException, 0x90>, "Size mismatch!");

} // namespace end def Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::UnityProjectNotLinkedException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::UnityProjectNotLinkedException*, "Unity.Services.Core", "UnityProjectNotLinkedException");
