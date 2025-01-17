PORTNAME=       installer
PORTVERSION=    24.7
CATEGORIES=     sysutils
PKGNAME=        opnsense-installer

MAINTAINER=     franco@opnsense.org
COMMENT=        OPNsense installer scripts
WWW=            https://github.com/opnsense/installer

LICENSE=        BSD2CLAUSE

RUN_DEPENDS=    cpdup:sysutils/cpdup
PREFIX=         /usr

NO_ARCH=        yes
NO_BUILD=       yes

USE_GITHUB=     yes
GH_ACCOUNT=     opnsense
GH_PROJECT=     installer

DISTNAME=       ${PORTNAME}-${PORTVERSION}
DISTFILES=      ${DISTNAME}.tar.gz
DIST_SUBDIR=    opnsense

.include <bsd.port.mk>

