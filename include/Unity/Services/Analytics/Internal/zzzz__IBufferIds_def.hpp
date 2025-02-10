#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IBufferIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBufferIds)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IBufferIds;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IBufferIds);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IBufferIds
class CORDL_TYPE IBufferIds {
public:
// Declarations
 __declspec(property(get=get_InstallId)) ::StringW  InstallId;

 __declspec(property(get=get_PlayerId)) ::StringW  PlayerId;

 __declspec(property(get=get_SessionId)) ::StringW  SessionId;

 __declspec(property(get=get_UserId)) ::StringW  UserId;

/// @brief Method get_InstallId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_InstallId() ;

/// @brief Method get_PlayerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_PlayerId() ;

/// @brief Method get_SessionId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_SessionId() ;

/// @brief Method get_UserId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_UserId() ;

// Ctor Parameters [CppParam { name: "", ty: "IBufferIds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBufferIds(IBufferIds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11876};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IBufferIds);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IBufferIds*, "Unity.Services.Analytics.Internal", "IBufferIds");
