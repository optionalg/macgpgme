//
//  GPGKeySignature.h
//  GPGME
//
//  Created by davelopper at users.sourceforge.net on Thu Dec 26 2002.
//
//
//  Copyright (C) 2001-2005 Mac GPG Project.
//  
//  This code is free software; you can redistribute it and/or modify it under
//  the terms of the GNU Lesser General Public License as published by the Free
//  Software Foundation; either version 2.1 of the License, or (at your option)
//  any later version.
//  
//  This code is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
//  FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
//  details.
//  
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program; if not, visit <http://www.gnu.org/> or write to the
//  Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, 
//  MA 02111-1307, USA.
//
//  More info at <http://macgpg.sourceforge.net/>
//

#ifndef GPGKEYSIGNATURE_H
#define GPGKEYSIGNATURE_H

#include <GPGME/GPGSignature.h>

#ifdef __cplusplus
extern "C" {
#if 0 /* just to make Emacs auto-indent happy */
}
#endif
#endif


@class GPGUserID;


@interface GPGKeySignature : GPGSignature /*"NSObject"*/
{
    BOOL		_isRevocationSignature;
    BOOL		_hasSignatureExpired;
    BOOL		_isSignatureInvalid;
    BOOL		_isExportable;
    NSString	*_signerKeyID;
    NSString	*_userID;
    NSString	*_name;
    NSString	*_email;
    NSString	*_comment;
    GPGUserID	*_signedUserID; /*"Signed userID; not retained"*/
    int			_refCount;
}

/*"
 * Attributes
"*/
- (NSString *) signerKeyID;
- (NSString *) userID;
- (NSString *) name;
- (NSString *) email;
- (NSString *) comment;
- (NSCalendarDate *) creationDate;
- (NSCalendarDate *) expirationDate;
- (BOOL) isRevocationSignature;
- (BOOL) hasSignatureExpired;
- (BOOL) isSignatureInvalid;
- (BOOL) isExportable;
- (GPGError) status;
- (GPGUserID *) signedUserID;

@end

#ifdef __cplusplus
}
#endif
#endif /* GPGKEYSIGNATURE_H */
