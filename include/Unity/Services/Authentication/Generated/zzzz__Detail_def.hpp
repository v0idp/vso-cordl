#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Generated/Detail.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Detail)
// Forward declare root types
namespace Unity::Services::Authentication::Generated {
class Detail;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Generated::Detail);
// Dependencies System.Object
namespace Unity::Services::Authentication::Generated {
// Is value type: false
// CS Name: Unity.Services.Authentication.Generated.Detail
class CORDL_TYPE Detail : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ErrorType, put=set_ErrorType)) ::StringW  ErrorType;

 __declspec(property(get=get_Message, put=set_Message)) ::StringW  Message;

/// @brief Field <ErrorType>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ErrorType_k__BackingField, put=__cordl_internal_set__ErrorType_k__BackingField)) ::StringW  _ErrorType_k__BackingField;

/// @brief Field <Message>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Message_k__BackingField, put=__cordl_internal_set__Message_k__BackingField)) ::StringW  _Message_k__BackingField;

static inline ::Unity::Services::Authentication::Generated::Detail* New_ctor(::StringW  errorType, ::StringW  message) ;

constexpr ::StringW const& __cordl_internal_get__ErrorType_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ErrorType_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Message_k__BackingField() ;

constexpr void __cordl_internal_set__ErrorType_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Message_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e9a41c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::StringW  errorType, ::StringW  message) ;

/// @brief Method get_ErrorType, addr 0x2e9a3fc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ErrorType() ;

/// @brief Method get_Message, addr 0x2e9a40c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

/// @brief Method set_ErrorType, addr 0x2e9a404, size 0x8, virtual false, abstract: false, final false
inline void set_ErrorType(::StringW  value) ;

/// @brief Method set_Message, addr 0x2e9a414, size 0x8, virtual false, abstract: false, final false
inline void set_Message(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Detail() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Detail", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Detail(Detail && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Detail", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Detail(Detail const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11596};

/// @brief Field <ErrorType>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ErrorType_k__BackingField;

/// @brief Field <Message>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Message_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::Generated::Detail, ____ErrorType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Generated::Detail, ____Message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::Generated::Detail, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication::Generated
NEED_NO_BOX(::Unity::Services::Authentication::Generated::Detail);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Generated::Detail*, "Unity.Services.Authentication.Generated", "Detail");
