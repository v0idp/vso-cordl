#pragma once
// IWYU pragma private; include "Models/Todo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Todo)
// Forward declare root types
namespace Models {
class Todo;
}
// Write type traits
MARK_REF_PTR_T(::Models::Todo);
// Dependencies System.Object
namespace Models {
// Is value type: false
// CS Name: Models.Todo
class CORDL_TYPE Todo : public ::System::Object {
public:
// Declarations
/// @brief Field completed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

/// @brief Field title, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_title, put=__cordl_internal_set_title)) ::StringW  title;

/// @brief Field userId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_userId, put=__cordl_internal_set_userId)) int32_t  userId;

static inline ::Models::Todo* New_ctor() ;

/// @brief Method ToString, addr 0x17fa6e0, size 0xc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_title() const;

constexpr ::StringW& __cordl_internal_get_title() ;

constexpr int32_t const& __cordl_internal_get_userId() const;

constexpr int32_t& __cordl_internal_get_userId() ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_title(::StringW  value) ;

constexpr void __cordl_internal_set_userId(int32_t  value) ;

/// @brief Method .ctor, addr 0x17fa6ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Todo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Todo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Todo(Todo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Todo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Todo(Todo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1750};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field userId, offset: 0x14, size: 0x4, def value: None
 int32_t  ___userId;

/// @brief Field title, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___title;

/// @brief Field completed, offset: 0x20, size: 0x1, def value: None
 bool  ___completed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Models::Todo, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Models::Todo, ___userId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Models::Todo, ___title) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Models::Todo, ___completed) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Models::Todo, 0x28>, "Size mismatch!");

} // namespace end def Models
NEED_NO_BOX(::Models::Todo);
DEFINE_IL2CPP_ARG_TYPE(::Models::Todo*, "Models", "Todo");
