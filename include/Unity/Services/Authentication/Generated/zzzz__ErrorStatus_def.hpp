#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Generated/ErrorStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorStatus)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Services::Authentication::Generated {
class Detail;
}
// Forward declare root types
namespace Unity::Services::Authentication::Generated {
class ErrorStatus;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Generated::ErrorStatus);
// Dependencies System.Object
namespace Unity::Services::Authentication::Generated {
// Is value type: false
// CS Name: Unity.Services.Authentication.Generated.ErrorStatus
class CORDL_TYPE ErrorStatus : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Code, put=set_Code)) int32_t  Code;

 __declspec(property(get=get_Detail, put=set_Detail)) ::StringW  Detail;

 __declspec(property(get=get_Details, put=set_Details)) ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Generated::Detail*>*  Details;

 __declspec(property(get=get_Status, put=set_Status)) int32_t  Status;

 __declspec(property(get=get_Title, put=set_Title)) ::StringW  Title;

/// @brief Field <Code>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Code_k__BackingField, put=__cordl_internal_set__Code_k__BackingField)) int32_t  _Code_k__BackingField;

/// @brief Field <Detail>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Detail_k__BackingField, put=__cordl_internal_set__Detail_k__BackingField)) ::StringW  _Detail_k__BackingField;

/// @brief Field <Details>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Details_k__BackingField, put=__cordl_internal_set__Details_k__BackingField)) ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Generated::Detail*>*  _Details_k__BackingField;

/// @brief Field <Status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) int32_t  _Status_k__BackingField;

/// @brief Field <Title>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Title_k__BackingField, put=__cordl_internal_set__Title_k__BackingField)) ::StringW  _Title_k__BackingField;

static inline ::Unity::Services::Authentication::Generated::ErrorStatus* New_ctor(int32_t  status, ::StringW  title, ::StringW  detail, int32_t  code, ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Generated::Detail*>*  details) ;

constexpr int32_t const& __cordl_internal_get__Code_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Code_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Detail_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Detail_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Generated::Detail*>* const& __cordl_internal_get__Details_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Generated::Detail*>*& __cordl_internal_get__Details_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Status_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Status_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Title_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Title_k__BackingField() ;

constexpr void __cordl_internal_set__Code_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Detail_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Details_k__BackingField(::System::Collections::Generic::List_1<::Unity::Services::Authentication::Generated::Detail*>*  value) ;

constexpr void __cordl_internal_set__Status_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Title_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e9a50c, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(int32_t  status, ::StringW  title, ::StringW  detail, int32_t  code, ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Generated::Detail*>*  details) ;

/// @brief Method get_Code, addr 0x2e9a4ec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Code() ;

/// @brief Method get_Detail, addr 0x2e9a4dc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Detail() ;

/// @brief Method get_Details, addr 0x2e9a4fc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Generated::Detail*>* get_Details() ;

/// @brief Method get_Status, addr 0x2e9a4bc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Status() ;

/// @brief Method get_Title, addr 0x2e9a4cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Title() ;

/// @brief Method set_Code, addr 0x2e9a4f4, size 0x8, virtual false, abstract: false, final false
inline void set_Code(int32_t  value) ;

/// @brief Method set_Detail, addr 0x2e9a4e4, size 0x8, virtual false, abstract: false, final false
inline void set_Detail(::StringW  value) ;

/// @brief Method set_Details, addr 0x2e9a504, size 0x8, virtual false, abstract: false, final false
inline void set_Details(::System::Collections::Generic::List_1<::Unity::Services::Authentication::Generated::Detail*>*  value) ;

/// @brief Method set_Status, addr 0x2e9a4c4, size 0x8, virtual false, abstract: false, final false
inline void set_Status(int32_t  value) ;

/// @brief Method set_Title, addr 0x2e9a4d4, size 0x8, virtual false, abstract: false, final false
inline void set_Title(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorStatus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorStatus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorStatus(ErrorStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorStatus(ErrorStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11597};

/// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Status_k__BackingField;

/// @brief Field <Title>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Title_k__BackingField;

/// @brief Field <Detail>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Detail_k__BackingField;

/// @brief Field <Code>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____Code_k__BackingField;

/// @brief Field <Details>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Generated::Detail*>*  ____Details_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::Generated::ErrorStatus, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Generated::ErrorStatus, ____Title_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Generated::ErrorStatus, ____Detail_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Generated::ErrorStatus, ____Code_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Generated::ErrorStatus, ____Details_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::Generated::ErrorStatus, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication::Generated
NEED_NO_BOX(::Unity::Services::Authentication::Generated::ErrorStatus);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Generated::ErrorStatus*, "Unity.Services.Authentication.Generated", "ErrorStatus");
