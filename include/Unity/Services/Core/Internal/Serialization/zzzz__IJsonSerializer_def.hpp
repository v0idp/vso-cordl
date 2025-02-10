#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/Serialization/IJsonSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IJsonSerializer)
// Forward declare root types
namespace Unity::Services::Core::Internal::Serialization {
class IJsonSerializer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::Serialization::IJsonSerializer);
// Dependencies 
namespace Unity::Services::Core::Internal::Serialization {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.Serialization.IJsonSerializer
class CORDL_TYPE IJsonSerializer {
public:
// Declarations
/// @brief Method DeserializeObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline T DeserializeObject(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IJsonSerializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJsonSerializer(IJsonSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12018};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Internal::Serialization
NEED_NO_BOX(::Unity::Services::Core::Internal::Serialization::IJsonSerializer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*, "Unity.Services.Core.Internal.Serialization", "IJsonSerializer");
