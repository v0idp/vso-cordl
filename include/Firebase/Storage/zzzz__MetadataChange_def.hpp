#pragma once
// IWYU pragma private; include "Firebase/Storage/MetadataChange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MetadataChange)
namespace Firebase::Storage {
class StorageMetadata;
}
// Forward declare root types
namespace Firebase::Storage {
class MetadataChange;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::MetadataChange);
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.MetadataChange
class CORDL_TYPE MetadataChange : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_ContentType)) ::StringW  ContentType;

/// @brief Field metadata, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_metadata, put=__cordl_internal_set_metadata)) ::Firebase::Storage::StorageMetadata*  metadata;

/// @brief Method Build, addr 0x192c110, size 0x5c, virtual false, abstract: false, final false
inline ::Firebase::Storage::StorageMetadata* Build() ;

/// @brief Method Build, addr 0x192c028, size 0xc, virtual false, abstract: false, final false
static inline ::Firebase::Storage::StorageMetadata* Build(::Firebase::Storage::MetadataChange*  metadataChange) ;

static inline ::Firebase::Storage::MetadataChange* New_ctor() ;

constexpr ::Firebase::Storage::StorageMetadata* const& __cordl_internal_get_metadata() const;

constexpr ::Firebase::Storage::StorageMetadata*& __cordl_internal_get_metadata() ;

constexpr void __cordl_internal_set_metadata(::Firebase::Storage::StorageMetadata*  value) ;

/// @brief Method .ctor, addr 0x192c0b0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_ContentType, addr 0x192c16c, size 0x20, virtual false, abstract: false, final false
inline void set_ContentType(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetadataChange() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetadataChange", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MetadataChange(MetadataChange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetadataChange", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetadataChange(MetadataChange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11707};

/// @brief Field metadata, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Storage::StorageMetadata*  ___metadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::MetadataChange, ___metadata) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::MetadataChange, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::MetadataChange);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::MetadataChange*, "Firebase.Storage", "MetadataChange");
