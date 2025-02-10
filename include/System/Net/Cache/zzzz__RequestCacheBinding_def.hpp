#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RequestCacheBinding)
namespace System::Net::Cache {
class RequestCacheValidator;
}
namespace System::Net::Cache {
class RequestCache;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheBinding;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCacheBinding);
// Dependencies System.Object
namespace System::Net::Cache {
// Is value type: false
// CS Name: System.Net.Cache.RequestCacheBinding
class CORDL_TYPE RequestCacheBinding : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Cache)) ::System::Net::Cache::RequestCache*  Cache;

 __declspec(property(get=get_Validator)) ::System::Net::Cache::RequestCacheValidator*  Validator;

/// @brief Field m_CacheValidator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CacheValidator, put=__cordl_internal_set_m_CacheValidator)) ::System::Net::Cache::RequestCacheValidator*  m_CacheValidator;

/// @brief Field m_RequestCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RequestCache, put=__cordl_internal_set_m_RequestCache)) ::System::Net::Cache::RequestCache*  m_RequestCache;

constexpr ::System::Net::Cache::RequestCacheValidator* const& __cordl_internal_get_m_CacheValidator() const;

constexpr ::System::Net::Cache::RequestCacheValidator*& __cordl_internal_get_m_CacheValidator() ;

constexpr ::System::Net::Cache::RequestCache* const& __cordl_internal_get_m_RequestCache() const;

constexpr ::System::Net::Cache::RequestCache*& __cordl_internal_get_m_RequestCache() ;

constexpr void __cordl_internal_set_m_CacheValidator(::System::Net::Cache::RequestCacheValidator*  value) ;

constexpr void __cordl_internal_set_m_RequestCache(::System::Net::Cache::RequestCache*  value) ;

/// @brief Method get_Cache, addr 0x2cc1cf4, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Cache::RequestCache* get_Cache() ;

/// @brief Method get_Validator, addr 0x2cc1cfc, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Cache::RequestCacheValidator* get_Validator() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestCacheBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheBinding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestCacheBinding(RequestCacheBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheBinding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestCacheBinding(RequestCacheBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7964};

/// @brief Field m_RequestCache, offset: 0x10, size: 0x8, def value: None
 ::System::Net::Cache::RequestCache*  ___m_RequestCache;

/// @brief Field m_CacheValidator, offset: 0x18, size: 0x8, def value: None
 ::System::Net::Cache::RequestCacheValidator*  ___m_CacheValidator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Cache::RequestCacheBinding, ___m_RequestCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cache::RequestCacheBinding, ___m_CacheValidator) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCacheBinding, 0x20>, "Size mismatch!");

} // namespace end def System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCacheBinding);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheBinding*, "System.Net.Cache", "RequestCacheBinding");
