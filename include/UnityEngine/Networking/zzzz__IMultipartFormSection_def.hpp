#pragma once
// IWYU pragma private; include "UnityEngine/Networking/IMultipartFormSection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IMultipartFormSection)
// Forward declare root types
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::IMultipartFormSection);
// Dependencies 
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.IMultipartFormSection
class CORDL_TYPE IMultipartFormSection {
public:
// Declarations
 __declspec(property(get=get_contentType)) ::StringW  contentType;

 __declspec(property(get=get_fileName)) ::StringW  fileName;

 __declspec(property(get=get_sectionData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  sectionData;

 __declspec(property(get=get_sectionName)) ::StringW  sectionName;

/// @brief Method get_contentType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_contentType() ;

/// @brief Method get_fileName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_fileName() ;

/// @brief Method get_sectionData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_sectionData() ;

/// @brief Method get_sectionName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_sectionName() ;

// Ctor Parameters [CppParam { name: "", ty: "IMultipartFormSection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMultipartFormSection(IMultipartFormSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11945};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::IMultipartFormSection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::IMultipartFormSection*, "UnityEngine.Networking", "IMultipartFormSection");
